#include <stdio.h>
#include <stdlib.h>


int main(){
    int w = 0;
    int i = 0;
    int r = 0;
    int a = 0;
    int n[5];
    int n_alunos = 1;
    int provas = 3;
    int med_aluno = 0;
    int s_med_aluno = 0;
    int med_turma = 0;
    int s_med_turma = 0;

    if (i == n_alunos){
        printf("todas as notas foram calculadas\n");
        return 0;
    }
    else{
        printf("caiu no while\n");
        do{
            printf("variavel w: %d\n", w);
            n[w] = rand() % 10;
            printf("Variavel n[w]: %d\n", n[w]);
            a = a + n[w];
            printf("variavel a: %d\n", a);
            w++;
    //            printf("continuar?");
    //            scanf("%d", &w);
        }while( w < 4);
        r = a / provas;
        printf("Media do aluno: %d", r);
    }

    return 0;
}
