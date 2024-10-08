#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;

    do {
        i++;
        do {
            printf(" *");
            j++;
        } while (j < 10);
        j = 0;
        printf("\n");
    } while (i < 10);   
}