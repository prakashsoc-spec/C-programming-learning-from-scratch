#include<stdio.h>
int main()
{
int n;
    printf("Enter only 1 number the size is same: ");
    scanf("%d",&n);
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter %d row %d element: ",i+1,j+1);
            scanf("%d",&ar[i][j]);
        }
    }

    //printing without transpose
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("%d ",ar[i][j]);

        }
        printf("\n");
    }
    printf("\n");
    //printing with doing transpose

    
     for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
           int e=ar[i][j];
           ar[i][j]= ar[j][i];
           ar[j][i]=e;

        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          printf("%d ",ar[i][j]);

        }
        printf("\n");
    }
}