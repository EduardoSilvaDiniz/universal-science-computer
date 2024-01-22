#include <stdio.h>


int main()
{
    int i=1, number, final = 0, posision = 0;
    while (i <= 100) 
    {
        scanf("%i", &number);
        if (number > final)
        {
            final = number;
            posision = i;
        }
        i++;
    }
    printf("%i\n%i\n", final, posision);
    return 0;
}
