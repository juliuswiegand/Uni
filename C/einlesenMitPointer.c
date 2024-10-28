#include <stdio.h>

void einlesen(int* z1, int* z2) {
    printf("Zahl 1 eingeben: ");
    scanf("%i", z1);
    printf("Zahl 2 eingeben: ");
    scanf("%i", z2);
}

int main() {
    int zahl1, zahl2;

    einlesen(&zahl1, &zahl2);

    printf("Ausgabe: %i\n", zahl1 * zahl2);
}