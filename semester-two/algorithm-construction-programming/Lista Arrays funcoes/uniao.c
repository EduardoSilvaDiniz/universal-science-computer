#include <stdio.h>
int *uniao(int arr[], int arrTwo[], int let, int letTwo, int *arrUniao)
{
    for (int i = 0; i < let; i++) arrUniao[i] = arr[i];

    for (int a = 0; a < letTwo; a++) arrUniao[a + let] = arrTwo[a];

    return arrUniao;
}

int main()
{
    int arr[] = {0,1,2,3,4};
    int arrTwo[] = {4,3,2,1,0};
    int arrTest[10];

    int let = sizeof(arr) / sizeof(arrTwo[0]);
    int letTwo = sizeof(arrTwo) / sizeof(arrTwo[0]);

    uniao(arr, arrTwo, let, letTwo, arrTest);

    printf("Primeira Array\n");
    for (int i = 0; i < let; i++) printf("%i ", arr[i]);

    printf("\n\nSegunda Array\n");
    for (int i = 0; i < letTwo; i++) printf("%i ", arrTwo[i]);

    printf("\n\nUniao das Arrays\n");
    for (int i = 0; i < 10; i++) printf("%i ", arrTest[i]);
    printf("\n");
}
