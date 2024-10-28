#include <stdio.h>

int main() {
    float noten[10], summe = 0;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Geben sie die %ite Note ein: ", i + 1);
        scanf("%f", &noten[i]);
    }

    for (i = 0; i < 10; i++) {
        summe += noten[i];
    }

    printf("\nDer Notendurchschnitt ist: %.2f \n", summe / 10);

    return 0;
}