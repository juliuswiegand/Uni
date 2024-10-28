#include <stdio.h>

int main() {
    int array[8][8] = {0};
    int i, j = 0;

    j = 0;
    // diagonale fuellen
    for (i = 0; i < 8; i++) {
        array[i][j] = j + 1;
        j++;
    }

    // ausgabe
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%i ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}