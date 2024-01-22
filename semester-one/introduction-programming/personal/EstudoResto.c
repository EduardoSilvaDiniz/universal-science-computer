#include <math.h>
#include <stdio.h>


void main()
{
    double number;
    scanf("%lf", &number);
    double res = fmod(number, 5.0);
    printf("%lf", res);
}
