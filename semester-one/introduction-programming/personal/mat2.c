#include <stdio.h>
#include <s
int main(){
    int x = 20;
    int y = 2;
    

    
    int x1 = (x--+ x * (x % y) );
        printf("%d\n", x1);
    int x2 = (x--+ x * (x % 3) );
        printf("%d\n", x2);
    int x3 = (--x + x * (x % 3) );
        printf("%d\n", x3);
    int x4 = (--x + x * (x % x) );
        printf("%d\n", x4);
    return




