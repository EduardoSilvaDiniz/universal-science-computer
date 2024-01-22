#include <stdio.h>

int *valoresEntre(int arr[], int min, int max, int let, int *arrMinMax)
{
    for (int i = 0; i < let; i++)
    {
        for (int j = 0; j < let; j++)
        {
            if(arr[j] >= min && arr[j] <= max)
            {
                arrMinMax[i] = arr[j];
                arr[j] = 0;
            }
        }
    }
    if (arrMinMax[0] != 0) return arrMinMax;
    else printf("nao foi encontrado nem um valor\n");
    return 0;
}

int main()
{
    int arr[] = {9,2,6,1,2,3,6,8,6,1};
    int arrTest[10];
    int let = sizeof(arr) / sizeof(arr[0]);

    int min, max;

    for (int a = 0;a < let; a++) printf("%i ", arr[a]);

    printf("\nDigite o valor minimo e maximo para procurar na array: ");
    scanf("%i%i", &min, &max);

    valoresEntre(arr, min, max, let, arrTest);
    for (int i = 0; i < let; i++) (arrTest[i] != 0) ? printf("%i ", arrTest[i]) : 0;
    printf("\n");
    return 0;
}
