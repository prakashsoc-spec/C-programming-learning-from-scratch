// Create a structure 'person' having attributes as age and weight. Access its structure variables using pointers.
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct person
    {
        int age;
        float weight;
    }person;

    person a,b;
    
    person*x=&a,*y=&b;
    (*x).age=120;
    (*x).weight=77;

    (*y).age=55;
    (*y).weight=75;
    
    printf("%d",a.age); printf("\n");
    printf("%.2f",a.weight); printf("\n");
    printf("%d",b.age); printf("\n");
    printf("%.2f",b.weight);

}