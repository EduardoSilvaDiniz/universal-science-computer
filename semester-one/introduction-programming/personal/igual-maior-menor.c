#include <stdio.h>

int main(){
    int cont;
    int valor;

        printf("digite um valor: ");
        scanf("%d", &valor);

        if (valor == 0){
            cont = 1;
        }
        else if(valor > 0){
            cont = 2;
        }
        else if(valor < 0){
            cont = 3;
        }

        switch(cont){
            case(1):
                printf("valor igual a 0\n");
                break;
            case(2):
                printf("valor maior que 0\n");
                break;
            case(3):
                printf("valor menor que 0\n");
                break;
        }

}
