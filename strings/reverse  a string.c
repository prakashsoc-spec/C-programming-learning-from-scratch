// take input and print reverse
#include<stdio.h>
#include<string.h>
int main()
{
    char str[35];
    puts("enter a string");
    scanf("%[^\n]s",str);

    // first finding size
    int size=0;
    for(int i=0;str[i]!='\0';i++)
    {
        size+=1;
    }

    printf(" size is : %d",size);
    printf("\n");
    for(int i=size;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}