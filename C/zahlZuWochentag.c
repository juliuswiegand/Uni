#include <stdio.h>

int main() {
    int tag;

    printf("Gib den Wochentag als Zahl ein: ");
    scanf("%d", &tag);

    switch (tag)
    {
        case 1:
            printf("Montag");
            break;
        case 2:
            printf("Dienstag");
            break;
        case 3:
            printf("Mittwoch");
            break;
        case 4:
            printf("Donnerstag");
            break;
        case 5:
            printf("Freitag");
            break;
        case 6:
            printf("Samstag");
            break;
        case 7:
            printf("Sonntag");
            break;
        default:
            printf("Kein gueltiger Wochentag");
            break;
    }

    printf("\n");

    switch (tag)
    {
        case 1 ... 3:
            printf("Erste Wochenhaelfte");
            break;
        case 4 ... 5:
            printf("Zweite Wochenhaelfte");
            break;
        case 6 ... 7:
            printf("Wochenende");
            break;
        default:
            printf("Kein Wochentag");
            break;
    }

    printf("\n");

    return 0;
}