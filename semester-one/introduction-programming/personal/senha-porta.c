#include <stdio.h>
int main(){
    int s = 123;
    int u_s;
    int i = 1;
    int r;

    while( i <= 4){
        printf("Digite a senha da porta:");
        scanf("%d", &u_s);

        if ( u_s == s){
            printf("Senha Correta, Abrindo a porta...\n");
            return 0;
            }
    
        else{
            printf("Senha invalida\n");
            i++;
            continue;
        }
    }
    printf("Você atingiu o limite de tentativas, Fechando o programa [ERROR]\n");
    return 1;
}
