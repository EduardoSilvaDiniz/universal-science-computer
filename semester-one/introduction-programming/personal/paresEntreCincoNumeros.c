#include <stdio.h>


int main()
{
    int n1,n2,n3,n4,n5, final=0;
    
    scanf("%i%i%i%i%i", &n1, &n2, &n3, &n4, &n5);
    if(n1%2 == 0)
        final++;
    if(n2%2 == 0)
        final++;
    if(n3%2 == 0)
        final++;
    if(n4%2 == 0)
        final++;
    if(n5%2 == 0)
        final++;

    printf("%i valores pares\n", final);
    return 0;
}
