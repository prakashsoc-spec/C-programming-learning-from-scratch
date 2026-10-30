//find the sum of a given matrix of n*m.
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
    //printing matirix
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }

    int sum=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          sum=sum+ar[i][j];
        }
    }
    printf("Sum of a given matrix is : %d",sum);
}