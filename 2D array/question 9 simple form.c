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
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("%d ",ar[j][i]);

        }
        printf("\n");
    }


    return 0;
}