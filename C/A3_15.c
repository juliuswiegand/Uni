#include <stdio.h>

int main() {
    int kleinste = 0, groesste = 0, zahl;

    while (1) {
        printf("Bitte Zahl (!=0) eingeben: ");
        scanf("%i", &zahl);

        if (zahl == 0) {
            break;
        }

        if (zahl < kleinste) {
            kleinste = zahl;
        } else if (zahl > groesste)
        {
            groesste = zahl;
        }

        if (kleinste == 0) {
            groesste = zahl;
            kleinste = zahl;
        }
    }

    printf("Groesste %i, Kleinste %i \n", groesste, kleinste);

    return 0;
}