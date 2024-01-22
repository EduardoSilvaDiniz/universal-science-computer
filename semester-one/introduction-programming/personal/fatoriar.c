#include <stdio.h>
 
long fatoriarPositivo(int number)
{
    if (number == 1 || number == 0)
        return 1;
    else
        return number * fatoriarPositivo(number - 1);
}

long fatoriarNegativo(int number)
{
    if (number == -1 || number == 0)
        return -1;
    else if (number < 0)
        return number * fatoriarNegativo(number + 1);
}

long fatoriar(int number)
{
    if (number == 1 || number == 0)
        return 1;
    else if (number == -1)
        return -1;
    else if (number < 0)
        return number * fatoriar(number + 1);
    else
        return number * fatoriar(number - 1);

}
 
int main() {
 
    int a,b;
    long final = 0;
    scanf("%i%i", &a, &b);
    if (a < 0)
        final += fatoriarNegativo(a);
    else
        final += fatoriarPositivo(a);

    if (b < 0)
    {
        final += fatoriarNegativo(b);
        final = -1 * final;
    }
    else
        final += fatoriarPositivo(b);

//    printf("%ld\n", final);
    printf("%ld\n", (fatoriar(a)+fatoriar(b)));
    return 0;
}
