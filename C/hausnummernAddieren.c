#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char string[] = "Paris 111, Los Angeles 23, London 16, Rom 28, Berlin 42, Tokyo 55, New York 78, Sydney 34, Moscow 47, Cairo 29, Beijing 66, Madrid 21, Toronto 53, Dubai 39, Mumbai 44,";

    char *ptr = strtok(string,",");

    int sum = 0;

    while (ptr != NULL)
    {

        char *numPtr = strrchr(ptr, ' ');
        numPtr++;
        int num = atoi(numPtr);
        sum += num;

        ptr = strtok(NULL, ",");
    }

    printf("Summe: %i\n", sum);
    
}