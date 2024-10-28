#include <stdio.h>

int main() {
    char array[5][4] = {
        {'A', 'B', 'C', 'D'},
        {'E', 'F', 'G', 'H'},
        {'I', 'J', 'K', 'L'},
        {'M', 'N', 'O', 'P'},
        {'Q', 'R', 'S', 'T'}
    };

    for (int i = 0; i < 5; i++) {
        printf("Zeile %i: %c %c %c %c \n", i+1, array[i][0], array[i][1], array[i][2], array[i][3]);
    }
}
