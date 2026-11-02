#include <stdio.h>
#include <string.h>
typedef struct person
{
    int age;
    float weight;
} person;

void change(person *x , person *y)
{
    printf("\n");
    (*x).age = 13;
    (*x).weight = 72;

    (*y).age = 15;
    (*y).weight = 75;
}
int main()
{
    person a, b;

    person *x = &a, *y = &b;
    (*x).age = 120;
    (*x).weight = 77;

    (*y).age = 55;
    (*y).weight = 75;

    printf("%d", a.age);
    printf("\n");
    printf("%.2f", a.weight);
    printf("\n");
    printf("%d", b.age);
    printf("\n");
    printf("%.2f", b.weight);

    change(&a, &b);

    printf("%d", a.age);
    printf("\n");
    printf("%.2f", a.weight);
    printf("\n");
    printf("%d", b.age);
    printf("\n");
    printf("%.2f", b.weight);
}