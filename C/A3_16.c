#include <stdio.h>

int main() {
    int zahl;
    int anzahl = 0;

    printf("Bitte Zahl eingeben: ");
    scanf("%i", &zahl);

    while (zahl % 5 == 0)
    {
        anzahl++;
        zahl = zahl / 5;
    }

    printf("Zahl ist %ix teilbar. \n", anzahl);
    
}