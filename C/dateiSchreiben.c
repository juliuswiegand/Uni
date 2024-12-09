#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("daten.noahwessler","w");

    if (fp == NULL) {
        printf("Datei konnte nicht geoeffnet werden :( \n");
    } else {
        fclose(fp);
        printf("Datei geschlossen. \n");
    }

    return 0;
}