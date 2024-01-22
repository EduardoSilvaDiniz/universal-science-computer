#include <stdio.h>

int main()
{
    int number, present= 1, after = 0, next = 0;
    scanf("%i", &number);

    for (int i = 0; i <= number; i++) {
        printf("%i", next);
        after=present;
        present=next;
        next=after+present;
    }

    return 0;
}
