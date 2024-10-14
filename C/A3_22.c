#include <stdio.h>

int main() {
    int eingabe;
    int ergebnis = 1;

    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%i", &eingabe);

    for (int i = 1; i <= eingabe; i++) {
        ergebnis = ergebnis * i;
    }

    printf("Die Fakultaet betraegt: %i \n", ergebnis);
}