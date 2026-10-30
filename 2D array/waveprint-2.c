// from up to down and up then down .
// column wise printing
// This is my way.
// IN this method , i have use extra variable and loops.
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

    // printing normal matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    // printing in wave type 2
    printf("\n");
    int i, j, k, l;
    for (i = n - 1; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if ((j + 1) % 2 != 0)
            {
                for (k = 0; k < n; k++)
                {
                    printf("%d ", ar[k][j]);
                }
            }
            else
            {
                for (l = n - 1; l >= 0; l--)
                {
                    printf("%d ", ar[l][j]);
                }
            }
        }
    }
}