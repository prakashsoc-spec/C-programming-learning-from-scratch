#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Hello my name is prakash neupane. What is your's ?";
    puts(str);
    printf("\n");
    printf("%s",str);

    char sta[40];
    // scanf("%s",sta); // only first word will be considered.

    gets(sta);
    puts(sta);

}