#include <stdio.h>
#include <string.h>

int main() {
    struct spender{
        float betrag;
        char vorname[30];
        char nachname[30];
    };

    struct spender einSpender;

    printf("Wie viel wurde gegönnt: ");
    scanf("%f", &einSpender.betrag);
    fflush(stdin);

    printf("Vorname vom Gönner: ");
    scanf("%s", einSpender.vorname);
    fflush(stdin);

    printf("Nachname vom Gönner: ");
    scanf("%s", einSpender.nachname);
    fflush(stdin);

    printf("\n--------------------------------------------\nFolgende Daten wurden erfasst:\nName: %s, %s \nHat folgenden Betrag gegönnt: %.2f€\n", einSpender.nachname, einSpender.vorname, einSpender.betrag);
}