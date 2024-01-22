#include <stdio.h>

int factorial_tail(int n, int accumulator) {
    if (n == 0) {
        return accumulator;
    } else {
        return factorial_tail(n - 1, n * accumulator); // Chamada recursiva na cauda
    }
}



int main()
{
    int a;
    scanf("%i", &a);
    printf("%u\n", factorial_tail(a, 1));
    return 0;
}
