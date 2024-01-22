#include <stdio.h>
void testPar(int a)
{
    if (a == 0)
        printf("0");
    else
    {
        printf("%i", a);
        testPar(a-1);
    } 
}

int main()
{
    testPar(4);
    return 0;
}
