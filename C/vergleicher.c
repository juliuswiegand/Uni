#include <stdio.h>

int main() {
    int zahl1, zahl2;

    printf("Gib die erste Zahl ein: ");
    scanf("%i", &zahl1);
    printf("Gib die zweite Zahl ein: ");
    scanf("%i", &zahl2);

    if (zahl1 < zahl2)
    {
        printf("\nDie erste Zahl ist kleiner als die Zweite.");
    } else if (zahl1 > zahl2)
    {
        printf("\nDie erste Zahl ist groesser als die Zweite.");
    } else {
        printf("\nDie Zahlen sind gleich.");
    }
    
    printf("\n");
    return 0;
}