#include <stdio.h>

int main()
{
    // Variablen deklarieren
    float preis;
    float eingeworfen;
    int sorte;

    // Auswahl der Getraenke
    printf("Waehlen Sie Ihr Getraenk aus:\n");
    printf("1) Wasser (0,50 Euro)\n");
    printf("2) Limonade (1,00 Euro)\n");
    printf("3) Bier (2,00 Euro)\n\n");
    printf("Geben sie 1, 2 oder 3 ein: ");
    scanf("%i", &sorte);

    // den zu zahlenden Betrag festlegen per switch
    switch (sorte)
    {
    case 1:
        preis = 0.5;
        break;
    case 2:
        preis = 1;
        break;
    case 3:
        preis = 2;
        break;
    default:
    printf("Das Getraenk haben wir nicht");
        break;
    }
    
    // Aufforderung zur Bezahlung
    printf("Bitte zahlen Sie %.2f€: ", preis);

    // ueberpruefe Geldstueck mit if-Abfrage
    scanf("%f", &eingeworfen);
    
    if (eingeworfen == preis)
    {
        printf("Vielen Dank, bitte entnehmen Sie ihr Getränk.");
    } else
    {
        printf("Bitte zahlen Sie passend.");
    }

    printf("\n");

    return 0;
}
