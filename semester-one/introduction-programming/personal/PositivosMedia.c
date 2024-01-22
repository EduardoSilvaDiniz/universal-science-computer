#include <stdio.h>

void main()
{
    double number = 0, final = 0;
    int i = 1, cost = 0;


    while (i <= 6)
    {
        scanf("%lf", &number);
        if (number >= 0)
        {
            cost++;
            final += number;
        }
        i++;
    }
    printf("%i valores positivos\n", cost);
    
    printf("%.1lf\n", (final/cost));
}