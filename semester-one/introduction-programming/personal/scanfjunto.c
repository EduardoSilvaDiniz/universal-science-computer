#include <stdio.h>

int main() {
    int idade;
    int altura;

    printf("Informe sua idade e altura: ");
    scanf("%d %.2f", &idade);

    printf("sua idade é %d e sua altura é %.2f", idade);
    return 0;
}
