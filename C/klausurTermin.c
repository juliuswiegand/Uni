#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char string[] = "Ort:Essen,Raum:104,Datum:30.09.2024";

    char *ptr = strtok(string,",");

    char ort[50];
    char datum[50];
    char raum[50];

    int i = 0;
    while (ptr != NULL) {
        i++;
        char *trennPtr = strrchr(ptr, ':');
        trennPtr++;

        switch (i)
        {
            case 1:
                strcpy(ort, trennPtr);
                break;
            case 2:
                strcpy(raum, trennPtr);
                break;
            case 3:
                strcpy(datum, trennPtr);
                break;
            default:
                break;
        }

        ptr = strtok(NULL, ",");
    }

    printf("Am %s wird in %s in Raum %s eine Klausur geschrieben.\n", datum, ort, raum);
}