#include <stdio.h>

int main()
{
    int number=0, x=1, i = 0, a = 0;
    scanf("%i", &number);

        if ((number % 2) == 1)
        {
            for (a = 1; a <= number; a+= 2)
            {
                printf("%i\n", a);
            }
        }
        else if ((number % 2) == 0)
        {
            for (a = 1; a < number; a+= 2)
            {
                printf("%i\n", a);
            }
        }
    return 0;
}