// WAP to rotate a matrix 90 degree cloclwise.(leetcode -48)
// 123
// 456
// 789

// This is very ineffective way, but i did it. 😢😢😎
 // In question 11 simple file, it is solved in simple way.
#include <stdio.h>
int main()
{
    int n, m;
    printf("rows: ");
    scanf("%d", &n);
    printf("coloumns: ");
    scanf("%d", &m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter %d row %d element: ", i + 1, j + 1);
            scanf("%d", &ar[i][j]);
        }
    }

    // printing without transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    // printing transpose matrix
    printf("transpose matrix is : \n");
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = ar[j][i];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // printing of 90 degree rotation
    printf(" 90 degree rotation matrix is : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 1)
            {
                ar[i][j] = a[i][j];
                printf("%d ", ar[i][j]);
            }
            else
            {
                if (j < 2)
                {
                    ar[i][j] = a[i][j + 2];
                    printf("%d ", ar[i][j]);
                }
                else
                {
                    ar[i][j] = a[i][0];
                    printf("%d ", ar[i][j]);
                }
            }
        }
        printf("\n");
    }

    //  for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         printf("%d ",ar[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
