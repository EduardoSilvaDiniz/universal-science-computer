#include <stdio.h>

int main(){
    int x;

    printf("digite um valor para x: ");
    scanf("%d", &x);

    if (x >= 10 && x < 20)
        printf("x esta entre 10 e 20");
    else
        printf("o valor de x não é menor que 20.");
    return 0;
}
