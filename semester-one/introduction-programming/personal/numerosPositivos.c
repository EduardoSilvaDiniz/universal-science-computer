#include <stdio.h>


int main()
{
    double n1,n2,n3,n4,n5,n6;
    int final=0;
    
    scanf("%lf%lf%lf%lf%lf%lf", &n1, &n2, &n3, &n4, &n5, &n6);
    if(n1> 0)
        final++;
    if(n2> 0)
        final++;
    if(n3> 0)
        final++;
    if(n4> 0)
        final++;
    if(n5> 0)
        final++;
    if(n6> 0)
        final++;

    printf("%i valores positivos\n", final);
    return 0;
}
