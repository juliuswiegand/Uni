#include <stdio.h>

int main() {
    float tage;

    printf("Bitte geben Sie die Tage ein: ");
    scanf("%f", &tage);
    printf("\n");
    printf("Stunden: %.2f \n", tage*24);
    printf("Minuten: %.2f \n", tage*24*60);
    printf("Sekunden: %.2f \n", tage*24*60*60);

    return 0;
}