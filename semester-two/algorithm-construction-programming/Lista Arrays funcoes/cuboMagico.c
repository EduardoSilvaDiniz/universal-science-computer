#include <stdio.h>

void matrizMagico(int matriz[3][3])
{
    int soma = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma+=matriz[i][j];
            soma+=matriz[j][i];
        }
    }

    for (int o = 0; o < 3; o++) soma+=matriz[o][o];
    for (int p = 2; p >= 0; p--) soma+=matriz[p][p];

    (soma == 120) ? printf("e um cubo magico!!\n") : 0;
}

int main()
{
  int matriz[3][3] = {2,7,6,
                      9,5,1,
                      4,3,8};

  matrizMagico(matriz);
}
