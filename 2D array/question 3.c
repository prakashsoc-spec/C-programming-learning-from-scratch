//WAP to add two matrices.
// There is no need to take size of another matrix because for adding in matrix , both matrices 
// have to be in same size.
#include<stdio.h>
int main()
{
    int a,s,d,f;

    printf("Enter the size of first matrices\n");
    printf("rows: ");
    scanf("%d",&a);
    printf("coloumns: ");
    scanf("%d",&s);
    int ar[a][s];

    printf("Enter the size of second matrices\n");
    printf("rows: ");
    scanf("%d",&d);
    printf("coloumns: ");
    scanf("%d",&f);
    int as[d][f];

    printf("Enter value for first matrice\n");
     for(int i=0;i<a;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf("enter %d row %d element: ",i+1,j+1);
            scanf("%d",&ar[i][j]);
        }
    }

    printf("Enter value for second matrice\n");
     for(int i=0;i<d;i++)
    {
        for(int j=0;j<f;j++)
        {
            printf("enter %d row %d element: ",i+1,j+1);
            scanf("%d",&as[i][j]);
        }
    }

    //calculating sum and printing
     for(int i=0;i<d;i++)
    {
        for(int j=0;j<f;j++)
        {
            ar[i][j]=ar[i][j] + as[i][j];
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }

}