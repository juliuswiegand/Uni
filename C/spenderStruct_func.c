#include <stdio.h>
#include <string.h>

const struct spender{
    float betrag;
    char vorname[30];
    char nachname[30];
};

void einlesen(struct spender *einSpender) {
    printf("Wie viel wurde gegönnt: ");
    scanf("%f", &einSpender->betrag);
    fflush(stdin);

    printf("Vorname vom Gönner: ");
    scanf("%s", einSpender->vorname);
    fflush(stdin);

    printf("Nachname vom Gönner: ");
    scanf("%s", einSpender->nachname);
    fflush(stdin);
}

void ausgeben(struct spender* einSpender) {
    printf("\n--------------------------------------------\nFolgende Daten wurden erfasst:\nName: %s, %s \nHat folgenden Betrag gegönnt: %.2f€\n", einSpender->nachname, einSpender->vorname, einSpender->betrag);
}

int main() {
    struct spender goenner;

    einlesen(&goenner);
    ausgeben(&goenner);
}