#include <stdio.h>
#include <string.h>

char *vNameArray[5] = {"Juergen", "Lucien", "Thomas", "Pep", "Bruno"};
char *nNameArray[5] = {"Klopp", "Favre", "Tuchel", "Guardiola", "Labbadia"};

char ausgabe[81];

int main() {
    int i, j, underline;
    for (i = 0; i < 5; i++) {

        // Vornamen in ausgabe kopieren
        strcpy(ausgabe, vNameArray[i]);

        // anzahl unterstriche bestimmen und mit Schleife das Zeichen "_" an ausgabe verketten
        underline = 80 - strlen(vNameArray[i]) - strlen(nNameArray[i]);
        for (j = 0; j < underline; j++) {
            strcat(ausgabe, "_");
        }

        // nachname an ausgabe verketten
        strcat(ausgabe, nNameArray[i]);

        printf("%s\n", ausgabe);
    }

    return 0;
}