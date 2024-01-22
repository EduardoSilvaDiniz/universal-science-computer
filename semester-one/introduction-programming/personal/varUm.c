#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char one[] = "luna jade nego";
    char *pointerOne = malloc(sizeof(one));

    strcpy(pointerOne, one);
    for (int i = 5; i <= sizeof(one); i+=5) 
    {
        printf("%s\n", (pointerOne+(sizeof(one)-i)));
    }
    return 0;


}
