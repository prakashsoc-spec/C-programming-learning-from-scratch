
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    char s2[50];

    printf("Enter name: ");
    scanf(" %[^\n]", s1);

    printf("Enter surname: ");
    scanf(" %[^\n]", s2);    // leading space skips the leftover newline

    strcat(s1, s2);
    printf("%s\n", s1);
    return 0;
}