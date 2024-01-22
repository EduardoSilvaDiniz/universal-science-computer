#include <stdio.h>

int main(){
    int dia;
    int semana;
    int i = 0;
    

    do {
        printf("Digite um Dia do Mês: ");

        scanf("%d", &dia);

        if (dia <= 7){
        semana = 1;
        }
        else if (dia <= 14){
        semana = 2;
        }
        else if (dia <= 21){
        semana = 3;
        }
        else if (dia <= 28){
        semana = 4;
        }

            switch (semana) {
                case 1:
                    printf("primeira Semana\n");               
                    i++;
                    break;
                case 2:
                    printf("segunda Semana\n");
                    i++;
                    break;
                case 3:
                    printf("Terceira Semana\n");
                    i++;
                    break;
                case 4:
                    printf("Quarta Semana\n");
                    i++;
                    break;
                default:
                    printf("valor invalido\n");
                    break;
            }
    } while(i == 0);

    return 0;

}
