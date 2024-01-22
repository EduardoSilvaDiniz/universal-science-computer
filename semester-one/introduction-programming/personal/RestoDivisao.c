#include <math.h>
#include <stdio.h>


int main()
{
    int numberOne=0 , numberTwo = 0;
    scanf("%i%i", &numberOne, &numberTwo);
    if (numberOne < numberTwo)
        for (numberOne; numberOne < numberTwo; numberOne++) 
        {
            if( (fmod(numberOne, 5.0)) == 2 || (fmod(numberOne, 5.0)) == 3 )
            printf("%i\n", numberOne);
        }
    else
    {
        for (numberTwo; numberTwo < numberOne; numberTwo++) 
        {
            if( (numberTwo % 5) == 2 || (numberTwo % 5) == 3 )
            printf("%i\n", numberTwo);
        }
    }
    return 0;
}
