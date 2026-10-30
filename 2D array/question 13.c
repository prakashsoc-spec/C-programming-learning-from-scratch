// Given an n*m matrix 'a', print all elements of the matrix in spiral order.(leetcode-54)
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

    int minr = 0, maxc = m - 1, maxr = n - 1, minc = 0, count = 0, no = n * m;
    while (count < no)
    {
        // printing minr
        for (int j = minc; j <= maxc; j++)
        {
            printf("%d ", ar[minr][j]);
            count++;
        }
        minr++;
        if (count >= no)
            break;

        // printing maxc
        for (int i = minr; i <= maxr; i++)
        {
            printf("%d ", ar[i][maxc]);
            count++;
        }
        maxc--;
        if (count >= no)
            break;

        // printing maxr
        for (int j = maxc; j >= minc; j--)
        {
            printf("%d ", ar[maxr][j]);
            count++;
        }
        maxr--;
        if (count >= no)
            break;

        // printing minc
        for (int i = maxr; i >= minr; i--)
        {
            printf("%d ", ar[i][minc]);
            count++;
        }
        minc++;
        if (count >= no)
            break;
    }
}