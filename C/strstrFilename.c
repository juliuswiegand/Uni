#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "/home/olliDerKing/FOM/2014/Test.ods";

    char *extPtr = strrchr(string, '.');
    extPtr++;
    printf("Dateierweiterung: %s\n", extPtr);
    *extPtr--;

    *extPtr = '\0';
    char *fnPtr = strrchr(string, '/');
    fnPtr++;
    printf("Dateiname: %s\n", fnPtr);
    fnPtr--;

    fnPtr++;
    *fnPtr = '\0';
    printf("Verzeichnis: %s\n", string);

    return 0;
}