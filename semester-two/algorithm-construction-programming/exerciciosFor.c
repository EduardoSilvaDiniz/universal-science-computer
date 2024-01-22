#include <stdio.h>

void exec1()
{
    int n;
    scanf("%i", &n);
    for (int i = 0; i <= 10; i++)
    {
        printf("%i\n", i*n);   
    }
}
void exec2()
{
    int idade, total =0;
    for (int i = 0; i <= 50; i++)
    {
        scanf("%i", &idade);
        total+=idade;   
    }
    
    printf("media : %i\n", total/2);
}

void exec3()
{
    int n;
    printf("Numero impar par\n");
    for (int i = 0; i <=10; i++)
    {
        scanf("%i", &n);
        
        if(n%2 == 0){
            printf("%i\n", n);
        }
    }
    
}

void exec4()
{
    int n;
    double soma=0;


    for (int i = 0; i <= 15; i++)
    {
        scanf("%i", &n);
        soma+=n;
    }
    
    printf("%.2f\n", soma/2);
}

void exec5()
{
    int n;
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &n);
        if (n >= 10 && n <= 20)
        {
            printf("esta no intervalo: %i\n", n);
        }
        else
        {
            printf("esta fora do intervalo: %i\n", n);
        }
        
    }
    
}

void exec6()
{
    int n1, n2, produto = 1;
    scanf("%i%i", &n1, &n2);

    for (int i = 0; i < n2; i++)
    {
        produto=produto*n1;
    }
    printf("%i\n", produto);
    
}

void exec7()
{
    int n, final =0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &n);
        if(n > final)
            final=n;
    }
    printf("O maior valor : %i\n", final);
    
}

void exec8()
{
    int n;
    scanf("%i", &n);
    int fi[n];
    fi[0] = 0;
    fi[1] = 1;
    printf("%i", fi[0]);
    if(n > 1)
    {
        printf(" %i", fi[1]);
        for (int i = 2; i <= n; i++)
        {
            fi[i] = fi[i-1] + fi[i-2];
            printf(" %i", fi[i]);    
        }
        
    }
}

void main()
{
    exec8();
}