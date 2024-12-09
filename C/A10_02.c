#include <stdio.h>

int main() {
    FILE *fp;
    int array1[5] = {0,1,2,3,4};
    int array2[5];
    int temp;
    int i;

    // schreiben
    fp = fopen("zahlen.noahwessler", "w");
    if (fp != NULL) {
        for (i = 0;  i < 5; i++) {
            fprintf(fp, "%i ", array1[i]);
        }
    }
    fclose(fp);

    // Lesen
    int i = 0;
    fp = fopen("zahlen.noahwessler", "r");
    if (fp != NULL) {
        while (fscanf(fp, "%i", &temp) != EOF) {
            array2[i] = temp;
            i++;
        }
    } else {
        printf("Datei konnte nicht gelesen werden.\n");
    }
    fclose(fp);

    // ausgabe array2
    for (i = 0; i < 5; i++) {
        printf("Gelesen: %i \n", array2[i]);
    }

    return 0;
}