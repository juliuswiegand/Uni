#include <stdio.h>

int main() {
    int paare[][2]={{1,2},{3,4},{5,6},{7,8},{9,10}};

    for (int i = 0; i < 5; i++) {
        printf("Paar: %i und %i. Das Produkt ist: %i \n", paare[i][0], paare[i][1], paare[i][0] * paare[i][1]);
    }

    return 0;
}