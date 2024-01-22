#include <stdio.h>
#include <stdlib.h>

int i = 1, passwd, resul;

char testando(int pass, int pass_user){
    resul = pass == pass_user;
    switch (resul)
    {
        case 0:
            if (i > 4)
            {
                bloqueio();
            }
            else
            {
                return("senha Invalida\n");
                i++;
                main();
            }
            break;
        case 1:
            return ("Senha Correta\n");
            break;
    }
}

int bloqueio()
    {
        system("clear");
        printf("Senha Bloqueada!\nChame o ADM\nDigite a senha: ");
        scanf("%d", &passwd_user);
        resul = passwd_master == passwd_user;
        switch (resul)
        {
            case 0:
                printf("Senha Invalida\n");
                bloqueio();
                break;
            case 1:
                printf("senha Correta\nDigite a Nova Senha: ");
                i = 1;
                scanf("%d", &passwd);
                printf("Reiniciando o Sistema\n");
                sleep(2);
                main();
                break;
        }
    }

int main(){
    //pedindo a senha do usuario
    printf("Digite a senha: ");
    scanf("%d", &passwd_user);
    printf("%d ", testando(passwd, passwd_user));
}
