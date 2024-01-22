#include <math.h>
#include <stdio.h>

int main()
{
    double x1,x2,y1,y2;
    scanf("%lf%lf%lf%lf", &x1,&y1,&x2,&y2);
//    double final = (x2*x2+x2*x1+x1*x2+x1*x1) + (y2*y1+y2*y2+y1*y2+y1*y1);
    double final = pow((x2-x1), 2) + pow((y2-y1), 2);
    printf("%.4lf\n", sqrt(final));
    return 0;
}
