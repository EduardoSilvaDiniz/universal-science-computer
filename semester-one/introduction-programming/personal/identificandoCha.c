#include <stdio.h>

int main()
{
    int current=0, final=0;
    int participle[5]={};

    scanf("%i", &current);
    
    for (int i = 0; i < 5;i++) 
    {
        scanf("%i", &participle[i]);
    }

    for (int a = 0; a < 5;a++)
    {
        if(participle[a] == current)
            final++;
    }

    printf("%i\n", final);

    return 0;
}
