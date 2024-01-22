#include <stdio.h>
#include <math.h>

float calcX(int *num)
{
    float result, temp; 
    temp = num[0] * 2;
    result = num[1] / temp;
    printf("valor de X é : %f\n", result);
}

float calcY(int *num)
{
    float result, delta, temp;
    temp = pow(num[1],2);
    delta = temp - 4 * num[0] * num[2];
    temp = num[0] * 4;
    result = delta / temp;
    printf("valor de Y é : %f\n", result);
}

void main()
{
    int num[3], i; 
    char *ordem[3] = { "A", "B", "C" };
    for (i = 0; i < 3; i++)
    {
        printf("Digite o %s: ", ordem[i]);
        scanf("%d", &num[i]);
    }
    calcX(num);
    calcY(num);
}
