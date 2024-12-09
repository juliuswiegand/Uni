#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    fp = fopen("log.csv", "r");
    if (fp == NULL) {
        return 1;
    }

    char puffer[80];

    while (fgets(puffer, 80, fp)) {
        char *datum = strtok(puffer, ",");
        char *uhr = strtok(NULL, ",");
        char *name = strtok(NULL, ",");

        if (datum && uhr && name) {
            printf("\n----------------------\nDatum: %s\nUhrzeit: %s\nUser: %s", datum, uhr, name);
        }
    }

    printf("\n");
    fclose(fp);
    return 0;
}