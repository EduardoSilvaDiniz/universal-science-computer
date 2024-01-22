#include <stdio.h>

int main(){
    int ano;
    int idade;

    printf("qual é o seu ano de nacimendo? : ");
    scanf("%d", &ano);
    idade = 2023 - ano;

    printf("sua idade é %d", idade);

    return 0;
}
