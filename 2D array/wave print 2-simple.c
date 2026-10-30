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
    for (int j = 0; j < m; j++)
    {
        if((j+1)%2!=0)
        {
            for(int i=0;i<n;i++)
            {
                printf("%d ",ar[i][j]);
            }
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                printf("%d ",ar[i][j]);
            }
        }
    }
}