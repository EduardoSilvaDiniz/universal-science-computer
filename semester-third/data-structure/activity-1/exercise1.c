#include <stdio.h>
#define LIST_SIZE 5

void calculateLiquid(int *listGrossSalaries){
   for (int i = 0; i < LIST_SIZE; i++) {
    listGrossSalaries[i] = listGrossSalaries[i] - (listGrossSalaries[i] * 0.08);
  }
}

int main(void) {
  int listGrossSalaries[LIST_SIZE] = {1500, 2200, 4200, 1800, 3300};

  calculateLiquid(listGrossSalaries);

  printf("Salario Liquido: ");
  for (int i = 0; i < 5; i++) {
    printf("R$%i ", listGrossSalaries[i]);
  }
  printf("\n");

  return 0;
}
