#include <stdio.h>
#include <unistd.h>

void f3(char hello[])
{
    sleep(0.8);
    printf("%x", &hello);
    f3(hello);
}

void main()
{
    char hello[] = "hello World";
    printf("from main: %x", &hello);
    f3(hello);
    return;
}
