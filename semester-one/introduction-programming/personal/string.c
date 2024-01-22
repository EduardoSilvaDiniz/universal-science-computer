#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
    setlocale(LC_ALL, "Portuguese");
    char senha[6] = "abc";
    printf("%d", strcmp(senha, "abcd"));
}
