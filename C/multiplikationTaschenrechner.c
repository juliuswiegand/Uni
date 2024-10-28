#include<stdio.h>

float eingabeZahl() {
    float result;
    printf("\nZahl eingeben: ");
    scanf("%f", &result);

    return result;
}

float multipliziere(float z1, float z2) {
    return z1 * z2;
}

float ausgabeErgebnis(float ergebnis) {
    printf("\nDas Ergebnis ist: %.2f \n", ergebnis);
}

int main() {
    int a,b;
    a = eingabeZahl();
    b = eingabeZahl();
    float erg = multipliziere(a, b);
    ausgabeErgebnis(erg);

    return 0;
}