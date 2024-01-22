#include <stdio.h>

int main()
{
    int number, quantidy;
    double buy;

    scanf("%i%i%lf", &number, &quantidy, &buy);
    double final = quantidy * buy;

    scanf("%i%i%lf", &number, &quantidy, &buy);
    final += quantidy * buy;

    printf("VALOR A PAGAR: R$ %.2lf\n", final);

    return 1;
}
