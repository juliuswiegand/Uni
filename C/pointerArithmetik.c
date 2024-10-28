#include <stdio.h>

int main() {
    int i_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* i_zgr;
    
    float f_array[10] = {0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9};
    float * f_zgr;

    i_zgr = i_array;
    f_zgr = f_array;

    for (int i = 0; i < 10; i++) {
        printf("Int: %i, Float: %.1f \n", *i_zgr, *f_zgr);
        i_zgr++;
        f_zgr++;
    }
}