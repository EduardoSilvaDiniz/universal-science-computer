#include <stdio.h>

int main()
{
    double pay, green;
    char name[] = "";
    scanf("%s", name);
    scanf("%lf%lf", &pay, &green);
    printf("TOTAL = %.2lf\n", (green * 0.15) + pay);
    return 0;
}
