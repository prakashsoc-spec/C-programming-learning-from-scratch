#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    puts("Enter name: ");
    scanf("%[^\n]s",s1);

    char s2[30];
    strcpy(s2,s1);

    printf("your name is %s",s2);
}