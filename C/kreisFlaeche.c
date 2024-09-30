#include <stdio.h>
#include <math.h>

int main() {
    float radius = 0, flaeche = 0;

    printf("Bitte geben Sie den Radius des Kreises ein: ");
    scanf("%f", &radius);
    printf("\n");

    printf("Der Flaecheninhalt beträgt: %f \n", M_PI * radius * radius);
}