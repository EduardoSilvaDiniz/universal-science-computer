#include <stdio.h>
#include <string.h>

int main()
{
    char dica[6] = {"______"};
    char secreta[6] = {"banana"};
    int i, acertou = 0, result, contador = 0;
    char tentativa[1];
   
    while(contador < 6 && acertou != 1)
    {
            printf("inicio: %d\n", result);
            printf("inicio: %d\n", contador);
            printf("inicio: %d\n", acertou);
            contador++;
            printf("Dica:");
            for(i=0; i < 6; i++) 
            {
                printf("%c,", dica[i]);
            }
            printf("Digite uma letra: ");
            fgets(tentativa, 1, stdin);
            for (i = 0; i < 6 ; i++) 
            {
                if (secreta[i] == tentativa) 
                {
                    dica[i] = tentativa;
                }
            }
                if (result > 90) 
                {
                    printf("São iguais\n");
                    acertou++;
                }
            result = strcmp(secreta, dica);
            printf("fim: %d\n", result);
            printf("fim: %d\n", contador);
            printf("fim: %d\n", acertou);
    }
    if (contador >= 6) 
    {
        printf("Acertou todas as Letras!!\n");
        return 0;
    }
    else
    {
        printf("suas tentativas acabaram\n GAME OVER\n");
        return 1;
    }
}
