#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;

    float ks, ks_max = 0;
    int i = 0;
    char datum[11], datum_max[11];

    fp = fopen("konto.txt", "r");

    if (fp == NULL) {
        return 1;
    }

    while (fscanf(fp, "%10s,%f", &datum, &ks) != EOF) {
        // initialisiere ersten kontostand
        if (i == 0) {
            ks_max = ks;
            strcpy(datum_max, datum);
            i = 1;
            continue;
        }

        if (ks > ks_max) {
            ks_max = ks;
            strcpy(datum_max, datum);
        }
    }

    printf("Der maximale Kontostand ist %.2f€ am %s.\n", ks_max, datum_max);
}