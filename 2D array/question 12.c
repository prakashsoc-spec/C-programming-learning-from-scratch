// WAP to print the multiplication of two matrices given by the user.
#include <stdio.h>
int main()
{
    int a, s, d, f;

    printf("Enter the size of first matrices\n");
    printf("rows: ");
    scanf("%d", &a);
    printf("coloumns: ");
    scanf("%d", &s);
    int ar[a][s];

    printf("Enter the size of second matrices\n");
    printf("rows: ");
    scanf("%d", &d);
    printf("coloumns: ");
    scanf("%d", &f);
    int as[d][f];

    // Taking value for first matrix

    printf("Enter value for first matrice\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("enter %d row %d element: ", i + 1, j + 1);
            scanf("%d", &ar[i][j]);
        }
    }

    // Taking value for second matrix

    printf("Enter value for second matrice\n");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < f; j++)
        {
            printf("enter %d row %d element: ", i + 1, j + 1);
            scanf("%d", &as[i][j]);
        }
    }

    // for multiplication
    
    int b[a][f];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < f; j++)
        {
            int sum=0;
            for(int t=0;t<s;t++)
            {
                sum+= ar[i][t] * as[t][j];
            }
            b[i][j]=sum;
        }

    }
    // for printing
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < f; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}