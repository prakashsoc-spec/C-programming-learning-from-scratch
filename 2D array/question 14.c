// Given a positive integer n, generate a n*n matrix filled with elements from 1 to n^2
// in spiral order (leetcode-59)
#include <stdio.h>
int main()
{
    int n;
    printf("size: ");
    scanf("%d", &n);
    int ar[n][n];
    
    int minr = 0, maxc = n- 1, maxr = n - 1, minc = 0, count = 0, no = n * n;
    int s=1;
    while (count < no)
    {
        // printing minr
        for (int j = minc; j <= maxc; j++)
        {
            ar[minr][j]=s;
            count++;
            s++;
        }
        minr++;
        if (count >= no)
            break;

        // printing maxc
        for (int i = minr; i <= maxr; i++)
        {

            ar[i][maxc]=s;
            count++;
            s++;
        }
        maxc--;
        if (count >= no)
            break;

        // printing maxr
        for (int j = maxc; j >= minc; j--)
        {
            ar[maxr][j]=s;
            count++;
            s++;
        }
        maxr--;
        if (count >= no)
            break;

        // printing minc
        for (int i = maxr; i >= minr; i--)
        {
            ar[i][minc]=s;
            count++;
            s++;
        }
        minc++;
        if (count >= no)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}