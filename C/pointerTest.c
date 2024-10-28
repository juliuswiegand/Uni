#include <stdio.h>

int main() {
    int i = 4;
    int *i_zeiger;

    i_zeiger = &i;

    printf("%i\n", i);     
    printf("%p\n", i_zeiger); 
}