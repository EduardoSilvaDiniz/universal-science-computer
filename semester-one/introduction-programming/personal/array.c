#include <stdio.h>

int main(){
    int num[5], i;
    for(i=0; i<5; i++)
    {    
        printf("Digite Um Numero: ");
        scanf("%d", &num[i]);
    }
    printf("dados armazenados\n O vetor ficou com os Seguintes Numeros: ");
    for(i=0; i<5; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
