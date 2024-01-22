#include <stdio.h>

void matriz4x4(double matrix[4][4])
{
  printf("diagonal principal\n");

  for (int o = 0; o < 4; o++) printf("%.1lf ", matrix[o][o]);

  printf("\n\ndiagonal secundaria\n");

  for (int p = 3; p >= 0; p--) printf("%.1lf ", matrix[p][p]);

  printf("\n\nmatriz transposta\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) printf("%.1lf ", matrix[j][i]);
        printf("\n");
    }
}

int main()
{
  double matriz[4][4] = { {2.2,7.9,6.9,9.1},
                          {9.9,5.9,1.7,4.1},
                          {4.1,3.7,8.7,7.7},
                          {0.4,1.8,2.2,5.8}};
  matriz4x4(matriz);
}

