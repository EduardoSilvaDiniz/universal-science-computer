#include <stdio.h>
#include <stdbool.h>

void PiramideInvertida(int number, char carac)
{
	int a= 0;
	for(int i = 0; i <= number; i++)
		{
			while(a <= i)
			{
				printf("%c", carac);
				a++;
			}
			a=0;
			printf("\n");
		}
	
	for(int i = number; i <= number; i--)
		{
			while(a <= i)
			{
				printf("%c", carac);
				a++;
			}
			a=0;
			if (i < 0)
				break;
			printf("\n");
		}
} 

bool ParImpar(int number)
{
	if (number%2 == 0)
        return true;
	else
        return false;
}

int CalculadoraFibonacci(int number)
{
	if (number > -1)
	{
		int fibo[number];
		fibo[0] = 0;
		fibo[1] = 1;
		
		for (int i = 2; i < number; i++)
		{
			fibo[i] = fibo[i-1] + fibo[i-2];
		}
		return fibo[number-1];
	}
    else 
    {
        printf("So E permitido numeros acima de -1\n");
        return -1;
    }
}

bool VerificaPrimo(int number)
{
    int i;
    for(i = 2; i < number; i++)
    {
        if(number%i == 0)
            return false;
    }
    if(i==number)
        return true;
}


void Tabuada(int number)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%iX%i = %i\n", number, i, number*i);
    }
}

int CalculaFatorial(int number)
{
    if(number>-1)
    {
        int fator=1;
        for(int i = 1; i <= number; i++)
        {
           fator*=i; 
        }
        return fator;
    }
    else
    {
        printf("So E permitido numeros acima de -1\n");
        return -1;
    }
}

int SomaPares(int number)
{
    int soma=0;
    for(int i = 2; i <= number; i+=2)
    {
        soma+=i;
    }
    return soma;
}

int CalculaPotencia(int number, int expoente)
{
    int produto = 0;
    for(int i = 1; i < expoente; i++)
    {
        produto+= number * number;
    }
    return produto;
}

int SomaDigito(int number)
{
    int soma=0;
    while(number>0)
    {
        soma+=number%10;
        number /= 10;
    }
    return soma;
}
int main()
{

    for (int i = -2; i <= 10; i++)
    {
        printf("\nValor de I = %i\n\n", i);
        printf("Funcao ParImpar: %b\n", ParImpar(i));
        printf("Funcao CalculadoraFibonacci: %i\n", CalculadoraFibonacci(i));
        printf("Funcao VerificaPrimo: %b\n", VerificaPrimo(i));
        printf("Funcao CalculaFatorial: %i\n", CalculaFatorial(i));
        printf("Funcao SomaPares: %i\n", SomaPares(i));
        printf("Funcao CalculaPotencia: %i\n", CalculaPotencia(i, 2));
        printf("Funcao SomaDigito: %i\n", SomaDigito(i));
    }
        printf("\nFuncao PiramideInvertida\n");
        PiramideInvertida(7, 'L');
        printf("\nFuncao Tabuada com valor 9\n");
        Tabuada(9);
	return 0;
}

