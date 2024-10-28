#include <stdio.h>
#include <math.h>

void berechneUmfang(float *r, float *u) {
    *u = M_PI * *r * 2;
}

void berechneFlaeche(float *r, float *f) {
    *f = M_PI * *r * *r;
}

int main() {
    float radius, umfang, flaeche;

    printf("Bitte Radius eingeben: ");
    scanf("%f", &radius);

    berechneUmfang(&radius, &umfang);
    berechneFlaeche(&radius, &flaeche);

    printf("\nUmfang: %f\nFlaeche: %f\n", umfang, flaeche);

    return 0;
}
