#include <stdio.h>

int main() {
    int n = 16;
    int vv = 0, v = 1, fib;

    if (n == 0 || n == 1) {
        fib = n;
    } else {
        for (int i = 2; i <= n; i++) {
            fib = vv + v;
            vv = v;
            v = fib;
        }
    }

    printf("%i \n", fib);
    return 0;
}