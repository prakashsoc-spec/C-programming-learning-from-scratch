// write a function to insert a new character in a string at a given position.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char str[20]="prakash";
//   // adding any letter to index 3; adding but not replaced
//     for( int i=0;str[i]!='\0';i++)
//     {
//         if(i==3)
//         {
//             printf("p");
//         }
//         printf("%c",str[i]);
//     }

// }

#include <stdio.h>
#include <string.h>

int main()
{
  char str[20]="prakash";
  // adding any letter to index 3; adding but not replaced
    for( int i=7;i>=3;i--)
    {
        str[i+1]=str[i];
    }
    str[3]='p';
    printf("%s",str);

}

