#include<stdio.h>


int fun(){
static int count, num;
    if (num > 0){
        count = 1;
    }
    else{
        count = 0;
    }
    return count;
}

int main(){
    printf("escreva um numero: ");
        scanf("%d", &num);
    printf("%d", fun());
    return 0;
}
