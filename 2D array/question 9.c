// Write a pogram to print the transpose of the matrix entered by the user. (leetcode-867)
#include<stdio.h>
int main()
{
    int n,m;
    printf("rows: ");
    scanf("%d",&n);
    printf("coloumns: ");
    scanf("%d",&m);
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter %d row %d element: ",i+1,j+1);
            scanf("%d",&ar[i][j]);
        }
    }

    //printing without transpose
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           printf("%d ",ar[i][j]);

        }
        printf("\n");
    }

    printf("\n");
    //printing transpose matrix
    int a[m][n];
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=ar[j][i];
           printf("%d ",a[i][j]);

        }
        printf("\n");
    }


    return 0;
}