#include <stdio.h>

int main()
{
    int N;
    scanf("%i", &N);

    if (N >= 1 && N <= 45)
    {
        int fib[N];
        fib[0] = 0;
        fib[1] = 1;

        printf("%d", fib[0]);
        if (N > 1)
        {
            printf(" %d", fib[1]);
            for (int i = 2; i < N; i++) 
            {
                fib[i] = fib[i-1] + fib[i-2];
                printf(" %d", fib[i]);
            }
        }
        printf("\n");
    }        
    return 0;
}
