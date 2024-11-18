#include<stdio.h>
#include<string.h>

int main() {
    char string[50] = "Steaks! Why did it have to be steaks?";


    strncpy(string, "Snakes", 6);

    char *fSteak = strrchr(string, ' ');
    fSteak++;
    *fSteak = '\0';
    strcat(string, "snakes?");

    printf("%s\n", string);
}