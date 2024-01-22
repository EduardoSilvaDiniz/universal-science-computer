Exec1*******************************************
#include <stdio.h>
#include <string.h>

int main()
{
    int n1, n2, total; 
    char resp;
    
    printf("Escolha uma opção (+, -, x, /): ");
    scanf("%c", &resp);
    printf("Digite primeiro e segundo valor: ");
    scanf("%d%d", &n1, &n2);
    
    switch (resp)
    {
        case '+':
            total = n1 + n2;
            printf("%i\n", total);
            break;
        case '-':
            total = n1 - n2;
            printf("%i\n", total);
            break;
        case 'x':
            total = n1 * n2;
            printf("%i\n", total);
            break;
        case '/':
            total = n1 / n2;
            printf("%i\n", total);
            break;
        default:
            printf("Opção Invalido [ERROR]\n");
            break;
    }
    return 0;
}
Exec1*******************************************

Exec2*******************************************
#include <stdio.h>

void main()
{
    int notaUm,notaDois,notaTres;
    char nome[60];
    fgets(nome, 60, stdin);

    scanf("%i%i%i", &notaUm, &notaDois, &notaTres);

    int media = (notaUm + notaTres + notaDois) / 3;

    if (media >= 7)
        printf("%s Passou\n", nome);    
    else if (media <= 5)
        printf("%s reprovado\n", nome);
    else
        printf("%s recuperação\n", nome);
}
Exec2*******************************************

Exec3*******************************************
#include <stdio.h>

void main()
{
    int numberOne, numberTwo;
    scanf("%i%i", &numberOne, &numberTwo);
    if (numberOne > numberTwo)
        printf("%i é maior\n", numberOne);
    else
        printf("%i é maior\n", numberTwo);
}
Exec3*******************************************

Exec4*******************************************
#include <stdio.h>

void main()
{
    int numberOne, numberTwo;
    scanf("%i%i", &numberOne, &numberTwo);
    if (numberOne > numberTwo)
    {
        numberOne = numberOne - numberTwo;
        printf("%i é Diferença\n", numberOne);
    }
    else
    {
        numberTwo = numberTwo - numberOne;
        printf("%i é Diferença\n", numberTwo);
    }
}
Exec4*******************************************

Exec5*******************************************
#include <stdio.h>

void main()
{
    int numberOne;
    scanf("%i", &numberOne);

    if ((numberOne % 4) == 0)
        printf("%i é divisível por 4\n", numberOne);

    else if ((numberOne % 5) == 0)
    {
        printf("%i é divisível por 5\n", numberOne);
    }
    else
        printf("%i não é divisível por 5 ou 4\n", numberOne);

}
Exec5*******************************************