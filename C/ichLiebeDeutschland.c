#include<stdio.h>
#include<string.h>

int main() {
    char text1[100] = "Einigkeit und Recht und Freibier";
    char text2[] = "Freiheit";

    char *bier = strrchr(text1, ' ');
    bier++;
    *bier = '\0';

    strcat(text1, text2);
    printf("%s\n", text1);
}