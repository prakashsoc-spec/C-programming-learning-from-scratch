// Create a structure type'person' with name,salary and age as its attributes. Declare and initialize 2 variables for this. Print the name of
// first person and age of the other.

#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[10];
        float salary;
        int age;
    }ram , shyam;

    char a[]="Ram";
    strcpy(ram.name,a);
    printf("%s\n",ram.name);

    shyam.age=12;
    printf(" age of shyam is %d",shyam.age);
    
}