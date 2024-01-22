#include <stdio.h>

void main()
{
    int day, month, year;
    printf("Digite o Dia: ");
    scanf("%i", &day);
    printf("Digite o Mês: ");
    scanf("%i", &month);
    printf("Digite o Ano: ");
    scanf("%i", &year);

    if ( day > 31 || year <= 0 || year > 2023)
        month = 0;
    
    switch (month)
    {
    case 1:
        printf("%i de Janeiro de %i\n", day, year);
        break;
    case 2:
        printf("%i de Fevereiro de %i\n", day, year);
        break;
    case 3:
        printf("%i de Março de %i\n", day, year);
        break;
    case 4:
        printf("%i de Abril de %i\n", day, year);
        break;
    case 5:
        printf("%i de Maio de %i\n", day, year);
        break;
    case 6:
        printf("%i de Junho de %i\n", day, year);
        break;
    case 7:
        printf("%i de Julho de %i\n", day, year);
        break;
    case 8:
        printf("%i de Agosto de %i\n", day, year);
        break;
    case 9:
        printf("%i de Setembro de %i\n", day, year);
        break;
    case 10:
        printf("%i de Outubro de %i\n", day, year);
        break;
    case 11:
        printf("%i de Novembro de %i\n", day, year);
        break;
    case 12:
        printf("%i de Dezembro de %i\n", day, year);
        break;
    default:
        printf("\nErro Dia, Mês ou Ano Invalidos [ERROR]\n");
        break;
    }
}