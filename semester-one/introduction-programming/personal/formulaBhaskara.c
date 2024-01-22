#include <math.h>
#include <stdio.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf", &a,&b,&c);

    double delta = b*b - 4 * a * c;


    double R1 = (-b + sqrt(delta)) / (2*a);
    double R2 = (-b - sqrt(delta)) / (2*a);
    
    if(!isinf(R2) && !isinf(R1) && !isnan(R1) && !isnan(R2))
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1,R2);
    else
        printf("Impossivel calcular\n");
    return 0;
}
