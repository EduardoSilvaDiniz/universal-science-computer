#include <stdio.h>
#define MAX_LENGTH 100
#define NUM_STRINGS 10

void crecente(int *nums)
{
    int orga[5], contador, i, tam = 5, aux;
    for(contador = 1; contador < tam; contador++)
    {
        for(i = 0; i < tam - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                aux = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = aux;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        if (i != 4)
        {
            printf("%d, ", nums[i]);
        }
        else
        {
            printf("%d\n", nums[i]);
        }
    }
}

void decrecente(int *nums)
{
    int orga[5], contador, i, tam = 5, aux;
    for(contador = 1; contador < tam; contador++)
    {
        for(i = 0; i < tam - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                aux = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = aux;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        if (i != 4)
        {
            printf("%d, ", nums[i]);
        }
        else
        {
            printf("%d\n", nums[i]);
        }
    }
}


void main()
{
    int nums[5], i, resp;
    char ordem[NUM_STRINGS][MAX_LENGTH] = { {"Primeria"}, {"Segunda"}, {"Terceira"}, {"Quarta"}, {"Quinta"}, {"Sexta"} };
    for(i=0; i<5; i++)
        {
            printf("Digite o numero %s: ", ordem[i]);
            scanf("%d", &nums[i]);
        }
    printf("\n1)Ordem Crecente\n2)Ordem Decrecente\ncomo o programa deve organizar: ");
    scanf("%d", &resp);
    switch (resp)
    {
        case 1:
            crecente(nums);
            break;
        case 2:
            decrecente(nums);
            break;
    }
}
