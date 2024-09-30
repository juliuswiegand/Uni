#include <stdio.h>

int main() {
    int alter;
    printf("Gib dein Alter ein: ");
    scanf("%d", &alter);

    if (alter < 18 && alter > 0)
    {
        printf("Du bist ein Kind.");
    } else if (alter >= 18 && alter < 67)
    {
        printf("Du bist ein Erwachsener.");
    } else if (alter >= 67)
    {
        printf("Du bist ein Rentner.");
    } else
    {
        printf("Das geht nicht");
    }

    printf("\n");
    return 0;
}