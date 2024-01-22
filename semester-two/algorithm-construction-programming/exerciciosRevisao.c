#include <stdio.h>

void ParImpar()
{
    printf("ParImpar\n");
    int num1;
    scanf("%i",&num1);

    if (num1 % 2 == 0)
        printf("%i is par\n", num1);
    else
        printf("%i is impar\n", num1);
}

void DiaDaSemana()
{
    int num1;
    scanf("%i", &num1);
    switch (num1)
    {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sabado\n");
            break;

        default:
            printf("Valor invalido\n");
    }
}

void ImprimirFor()
{
    for (int i = 0; i <= 10; ++i)
    {
        printf("%i\n", i);
    }
}

void SomaProduto()
{
    int num = 1, produto=1;
    while (num != 0)
    {
        scanf("%i", &num);
        produto+=produto*num;
    }
    printf("Produto: %i\n", produto);
}

void SomaDivisao()
{
    int num, somaProduto=0;
    scanf("%i", &num);

    for (int i = 1; i < num; ++i)
    {
        if(num % i == 0)
        {
            somaProduto += i;
        }
    }
    if(somaProduto == num)
        printf("%i is perfect\n", num);
    else
        printf("%i is not perfect\n", num);
}

void GerarNumero()
{
    for (int i = 1000; i <= 1999; ++i)
    {
        if(i % 11 == 5)
            printf("%i\n", i);
    }
}

void Conjuntos()
{
    double n1, n2, n3;
    scanf("%lf%lf%lf", &n1,&n2,&n3);
    if(n3>n2 && n2>n1)
    {
        printf("Soma: %lf, Produto : %lf, media: %lf", (n1+n2+n3), (n1*n2*n3), ((n1+n2+n3)/2));
    }
}

int main() {
    Conjuntos();
    return 0;
}
