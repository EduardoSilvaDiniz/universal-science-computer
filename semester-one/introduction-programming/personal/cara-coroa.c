#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <sys/random.h>

int main()
{

    int i;
    int x;
   // printf("Intervalo de rand: [0,%d]\", RAND_MAX);
    
    for(i=1; i <= 10; i++)
        x = random() / 1;
        printf("valor de x é : %d\n",x );



}
