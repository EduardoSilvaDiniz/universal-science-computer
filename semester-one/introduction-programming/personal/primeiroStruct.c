#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct Person
{
    char name[10];
    uint8_t age;
    uint8_t height;
};

void test()
{

}

int main()
{
    struct Person person;
    strcpy(person.name, "edu");
    person.age=21;
    person.height=165;

    printf("%s\n%i\n%i\n", person.name, person.age, person.height);
    printf("%s\n" &test);
    return 0;
}
