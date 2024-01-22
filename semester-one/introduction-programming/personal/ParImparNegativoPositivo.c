#include <stdio.h>

int main()

{   
    int number = 0, numberTest = 0, i = 1;
    scanf("%i", &number);
    while (i <= number)
    {
        scanf("%i", &numberTest);
        if (numberTest > 0)
        {
            if ((numberTest % 2) == 0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }

        else if (numberTest != 0)
        {
            if ((numberTest % 2) == 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        
        else
            printf("NULL\n");

        i++;
    }
    return 0;
}