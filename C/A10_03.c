#include <stdio.h>

int main() {
    FILE *fp = fopen("log.csv", "r");
    if (fp == NULL) {
        return 1;
    }

    char datum[11]; 
    char uhr[6];    
    char name[20];

    while (fscanf(fp, "%10s,%5s,%s", datum, uhr, name) != EOF) {
        printf("\n----------------------\nDatum: %s\nUhrzeit: %s\nUser: %s", datum, uhr, name);
    }

    printf("\n");
    fclose(fp);
    return 0;
}