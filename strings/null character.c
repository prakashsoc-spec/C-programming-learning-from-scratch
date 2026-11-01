//  \0 is null character which can also be used as checkpoint in array.
// we actually don't need to put \0 in end.
// computer automatically puts \0 in end of the strings.
// Remember: computer only do when there is double quoted mark. i.e= ""
#include<stdio.h>
int main()
{
    char arr[] = "hello world\0";
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
}