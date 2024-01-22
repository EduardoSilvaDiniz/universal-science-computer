#include <stdio.h>


int main()

{
    int segundos=0, minutos=0, horas=0;
    scanf("%i", &segundos);
    
    for (segundos; segundos > 60; segundos-=60) 
        minutos++;
    
    for (minutos; minutos > 60; minutos-=60) 
        horas++;

    printf("%i:%i:%i\n", horas, minutos, segundos);
    return 0;
}
