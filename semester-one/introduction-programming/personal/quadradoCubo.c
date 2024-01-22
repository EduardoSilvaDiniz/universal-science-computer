#include <math.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
    int number;
    scanf("%i", &number);

    for (int i = 1; i <= number; i++) {
        printf("%i %i %i\n", i, (i*i), (i*i)*i);
    
    }

    return 0;
}
