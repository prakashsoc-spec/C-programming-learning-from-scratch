// A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match.
//Create an array of structure to hold records of 5 such cricketer and then write a program to read these records
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct circketer
    {
        char name[20];
        int age;
        int testmatch;
        int avgrun;
    }player;
    player arr[5];
     printf("Enter name\t age\t testmatch\t avgrun:\n");
    for(int i=0;i<5;i++)
    {
        scanf(" %s %d %d %d", arr[i].name, &arr[i].age, &arr[i].testmatch, &arr[i].avgrun);
    }
    printf(" name\t age\t testmatch\t avgrun\n:");
     for(int i=0;i<5;i++)
     {
        printf("%s\t%d\t%d\t%d\n",arr[i].name,arr[i].age,arr[i].testmatch,arr[i].avgrun);

     }
}


