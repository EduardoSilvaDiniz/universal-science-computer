#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int X;
        scanf("%d", &X);

        int ehPrimo = 1; // Assumir que X é primo inicialmente

        if (X <= 1) {
            ehPrimo = 0; // X não é primo se for menor ou igual a 1
        } else {
            for (int i = 2; i * i <= X; i++) {
                if (X % i == 0) {
                    ehPrimo = 0; // X não é primo se for divisível por i
                    break;
                }
            }
        }

        if (ehPrimo) {
            printf("%d eh primo\n", X);
        } else {
            printf("%d nao eh primo\n", X);
        }
    }

    return 0;
}


/*
#include <stdio.h>


int main()
{
    int numberOne = 0, x = 0, i = 0;

    scanf("%i", &numberOne);
    while(i <= numberOne)
    {
        scanf("%i", &x);
        if( !((x % 2) == 0) && (x % x) == 0)
            printf("%i eh primo\n", x);
        else
            printf("%i nao eh primo\n", x);
        i++;
    }
    
}*/
