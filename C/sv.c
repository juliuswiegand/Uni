// ##########################################
// Schiffeversenken
// 
// <C> 20.10.2021 GHS Infotronic
// ##########################################

# include <stdio.h>
#include <locale.h>

char FieldPlayer[11][10];
char FieldCPU[11][10];
char Letters[10];

int clearField()
    {
    for (int i = 0; i < 11; i++)
        {
        for (int j = 0; j < 10; j++)
            {
            FieldPlayer[i][j] = ' ';
            FieldCPU[i][j] = ' ';
            }
        }
    }

int drawField()
    {
    for (int column = 0; column < 11; column++)
        {
        // print index row on first row
        if (column == 0)
            {
            for (int i = 0; i < 10; i++)
                {
                //intend first letter more do align to double digit numbers
                if (i == 0)
                    {
                    printf("      %c", Letters[i]); // for border printf("    ║ %c", Letters[i]);
                    continue;
                    }
                printf("    %c", Letters[i]);
                }
            
            printf("\n\n"); //for border: printf("\n ═══╬════╬════╬════╬════╬════╬════╬════╬════╬════╬════\n");

            continue;
            }

        // print left index column
        if (column < 10)
            {
            printf(" %d    ", column); // intend first 9 numbers to align to double digit numbers
            }
        else
            {
            printf("%d    ", column); // for border: printf("%d  ║ ", column);
            }
        
        // print columns
        for (int row = 1; row < 11; row++)
            {
            char fieldContent = FieldPlayer[row][column];

            if (row < 10)
                {
                printf("%c    ", fieldContent); // for table borders: printf("%c  │ ", fieldContent);
                }
            else
                {
                printf("%c    ", fieldContent);
                }
            
            }
        
        // print table border
        if (column < 10) // avoids printing border on last, empty line
            {
            printf("\n     \n"); // for table borders: printf("\n    ╬────┼────┼────┼────┼────┼────┼────┼────┼────┼────\n");
            }
        }
    
    printf("\n\n");
    }

int placeShip(int shipLength)
    {
    // read user input of ship starting field (FORMAT: (Column | Row))
    char input[5]; // [letter, first digit, second digit, newline, \0]
    int column = 0;
    int row = 0;
    while (1)
        {
        printf("Wo moechtest du dein Schiff platzieren [z.B. C3]: ");
        fgets(input, 5, stdin);
        
        // read in column (number)
        if (input[2] != '\n')
            {
            if (input[1] == '1' && input[2] == '0') // check for 10
                {
                column = 10; // account for double digit number 10
                }
            else
                {
                printf("\n\nKeine gültige Eingabe. Nur die Buchstaben A-J und die Zahlen 1-10 sind moeglich. Eingabe erfolgen in diesem Format: (A1, ..., B1, etc.)\n\n");
                continue;
                }
            }
        else
            {
            column = input[1] - '0'; // single digit case, convert the char (incl. number) into a integer
            }
        
        char rowLetter = input[0];
        for (int i = 0; i < 10; i++) 
            {
            if (Letters[i] == rowLetter)
                {
                row = i + 1;
                }
            }  
        if (row == 0 || column < 1 || column > 10)
            {
            printf("\n\nKeine gültige Eingabe. Nur die Buchstaben A-J und die Zahlen 1-10 sind moeglich. Eingabe erfolgen in diesem Format: (A1, ..., B1, etc.)\n\n");
            continue;
            }

        printf("%d | %d \n", row, column);
        break;
        }

    // check for avaible directions
    int leftP = 0;
    int rightP = 0;
    int upP = 0;
    int downP = 0;

    if (row - shipLength >= 0)
        {
        leftP = 1;
        printf("Du kannst nach links platzieren. \n");
        }

    if (row + shipLength - 1 <= 10)
        {
        rightP = 1;
        printf("Du kannst nach rechts platzieren. \n");
        }

    if (column - shipLength >= 0)
        {
        upP = 1;
        printf("Du kannst nach oben platzieren. \n");
        }

    if (column + shipLength - 1 <= 10)
        {
        downP = 1;
        printf("Du kannst nach unten platzieren. \n");
        }

    // get player input for direction of ship
    char direction;
    printf("\n\nIn welche Richtung willst du dein Schiff platzieren [o, u, l, r]: ");
    scanf("%c", &direction);
    
    // check if the given direction is possible and place the crosses
    switch (direction)
        {
        case 'o':
            if (upP == 1)
                {
                FieldPlayer[row][column] = 'X';
                for (int i = column - shipLength + 1; i <= column - 1; i++)
                    {
                    FieldPlayer[row][i] = 'X';
                    }
                }
            else
                {
                printf("Keine gueltige Eingabe. Nochmal probieren. \n\n");
                }
            break;

        case 'u':
            if (downP == 1)
                {
                FieldPlayer[row][column] = 'X';
                for (int i = column; i < column + shipLength; i++)
                    {
                    FieldPlayer[row][i] = 'X';
                    }
                }
            else
                {
                printf("Keine gueltige Eingabe. Nochmal probieren. \n\n");
                }
            break;

        case 'l':
            if (leftP == 1)
                {
                FieldPlayer[row][column] = 'X';
                for (int i = row - shipLength + 1; i <= row - 1; i++)
                    {
                    FieldPlayer[i][column] = 'X';
                    }
                }
            else
                {
                printf("Keine gueltige Eingabe. Nochmal probieren. \n\n");
                }
            break;

        case 'r':
            if (rightP == 1)
                {
                FieldPlayer[row][column] = 'X';
                for (int i = row; i < row + shipLength; i++)
                    {
                    FieldPlayer[i][column] = 'X';
                    }
                }
            else
                {
                printf("Keine gueltige Eingabe. Nochmal probieren. \n\n");
                }
            break;

        default:
            printf("Keine gueltige Eingabe. Nochmal probieren. \n\n");
        }
        
    return 1;
    }

int main()
    {
    setlocale(LC_ALL, "en-US");

    printf("Willkommen zu Schiffeversenken! \n\n");

    clearField();

    for (int i = 0; i < 10; i++)
        {
        switch(i)
            {
            case 0: Letters[i] = 'A'; break;
            case 1: Letters[i] = 'B'; break;
            case 2: Letters[i] = 'C'; break;
            case 3: Letters[i] = 'D'; break;
            case 4: Letters[i] = 'E'; break;
            case 5: Letters[i] = 'F'; break;
            case 6: Letters[i] = 'G'; break;
            case 7: Letters[i] = 'H'; break;
            case 8: Letters[i] = 'I'; break;
            case 9: Letters[i] = 'J'; break;
            }
        }

    while (1)
    {
        drawField();
        placeShip(4);
    }
    }