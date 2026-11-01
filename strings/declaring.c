// basic of strings
// character is of 1 byte
// 1 byte = 8 bits 
#include <stdio.h>
int main()
{
    // char arr[5] = {'a', 'd', 'f', 'h', 't'};
    char arr[11] = "hello world";
    int i=0;
    while(i<11)
    {
        printf("%c",arr[i]);
        i++;
    }

    return 0;
}