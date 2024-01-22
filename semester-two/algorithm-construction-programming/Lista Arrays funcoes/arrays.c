#include <stdio.h>
int totalPares(int arr[], int let, int index)
{
    if (index >= let) // caso base
       return 0;

    return arr[index] + totalPares(arr, let, index+2); // caso recursivo
}
int maiorValor(int arr[], int let, int index)
{
    if (index == let) // caso base
       return -1;

    int Max = maiorValor(arr, let, index+1);

    return (arr[index] > Max ? arr[index] : Max); // caso recursivo
}
int totalIguais(int arr[],int arrTwo[], int let)
{
    int igual = 0;

    for (int i = 0; i < let; i++) (arr[i] == arrTwo[i]) ? igual++ : 0;

    return igual;
}

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8};
    int arrTwo[] = {0,1,3,3,4,9,6,10,8};
    int let = sizeof(arr) / sizeof(arr[0]);

    printf("funcao totalPares : %i\n", totalPares(arr, let, 0));
    printf("funcao maiorValor : %i\n", maiorValor(arr, let, 0));
    printf("funcao totalIguais : %i\n", totalIguais(arr, arrTwo, let));
    return 0;
}
