#include <stdio.h>

int main()
{
    int sekunden=0, minuten=0, stunden=0, tage=0;

    printf("Wie viele Sekunden sollen umgerechnet werden? ");
    scanf("%i", &sekunden);

    tage = sekunden / 86400;
    sekunden = sekunden % 86400; 

    stunden = sekunden / 3600;
    sekunden = sekunden % 3600;

    minuten = sekunden / 60;
    sekunden = sekunden % 60;

    printf("%d Tage, %d Stunden, %d Minuten, %d Sekunden\n", tage, stunden, minuten, sekunden);

    return 0;
}