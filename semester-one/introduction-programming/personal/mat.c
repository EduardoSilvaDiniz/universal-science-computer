#include <stdio.h>
#include
int main(){
    int x = 4 * 5;
    printf("primeira operação x: %d\n", x);
    x = x / 2;
    printf("ultima operação x: %d\n", x);
    int y = x % 4;
    printf("primeira operação y: %d\n", y);
    int z = x * y - 5;
    printf("primeira operação z: %d\n", z);
    z = x * (y - 5);
    printf("segunda operação z: %d\n", z);
    z = ( (2 + 3) * 4 - 2) / 2;
    printf("ultima operação z: %d\n", z);

    printf("todos os resultados: x:%d, y:%d z:%d", x, y, z);
    return 0;
} 

