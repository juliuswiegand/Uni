#include <stdio.h>

float getMax(float array[], int anzahl) {
    float max = array[0];

    for (int i = 1; i < anzahl; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int main() {
    float testArray[10] = {0, 7.5, 1.3, 3.5, 9, 3.1, 2.1, 1, 9.9, 3.0};

    printf("Das Maximum ist: %.2f \n", getMax(testArray, 10));
}