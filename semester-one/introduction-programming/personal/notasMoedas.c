#include <stdio.h>
#include <math.h>

int main() {
    double money = 0.0;
    int nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, nota5 = 0, nota6 = 0;
    int moeda1 = 0, moeda2 = 0, moeda3 = 0, moeda4 = 0, moeda5 = 0, moeda6 = 0;

    scanf("%lf", &money);

    // Converte o valor monetário para centavos
    int centavos = (int)(round(money * 100.0));

    while (centavos > 0) {
        if (centavos >= 10000) {
            nota1++;
            centavos -= 10000;
        } else if (centavos >= 5000) {
            nota2++;
            centavos -= 5000;
        } else if (centavos >= 2000) {
            nota3++;
            centavos -= 2000;
        } else if (centavos >= 1000) {
            nota4++;
            centavos -= 1000;
        } else if (centavos >= 500) {
            nota5++;
            centavos -= 500;
        } else if (centavos >= 200) {
            nota6++;
            centavos -= 200;
        } else if (centavos >= 100) {
            moeda1++;
            centavos -= 100;
        } else if (centavos >= 50) {
            moeda2++;
            centavos -= 50;
        } else if (centavos >= 25) {
            moeda3++;
            centavos -= 25;
        } else if (centavos >= 10) {
            moeda4++;
            centavos -= 10;
        } else if (centavos >= 5) {
            moeda5++;
            centavos -= 5;
        } else {
            moeda6++;
            centavos -= 1;
        }
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota1);
    printf("%d nota(s) de R$ 50.00\n", nota2);
    printf("%d nota(s) de R$ 20.00\n", nota3);
    printf("%d nota(s) de R$ 10.00\n", nota4);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota6);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda2);
    printf("%d moeda(s) de R$ 0.25\n", moeda3);
    printf("%d moeda(s) de R$ 0.10\n", moeda4);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda6);

    return 0;
}

