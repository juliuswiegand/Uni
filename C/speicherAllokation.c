#include <stdio.h>
#include <stdlib.h>

int getMin(int array[], int *size) {
    int min = array[0];
    for (int i = 1; i < *size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

float getAverage(int *array, int *size) {
    int sum = 0;
    for (int i = 0; i < *size; i++) {
        sum += array[i];
    }
    return (float)sum / *size;
}

int main() {
    int groesse, i;
    int *array;

    // groesse einlesen
    printf("Wie groß soll der Array sein: ");
    scanf("%i", &groesse);

    // speicher allokieren
    array = malloc(groesse * sizeof(int));

    // werte einlesen
    for (i = 0; i < groesse; i++) {
        printf("%i/%i Element: ", i + 1, groesse);
        scanf("%i", &array[i]);
    }

    // kleinsten wert
    printf("\nMinimum: %i", getMin(array, &groesse));
    printf("\nAverage: %.2f\n", getAverage(array, &groesse));

    return 0;
}