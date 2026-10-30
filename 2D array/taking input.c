#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter array row size: ");
    scanf("%d",&m);

    
    printf("Enter array column size: ");
    scanf("%d",&n);

    int ar[3][3];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter %d row %d element: ",i+1,j+1);
            scanf("%d",&ar[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }

}