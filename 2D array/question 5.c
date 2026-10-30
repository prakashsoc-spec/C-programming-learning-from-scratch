//find out the max element and min element in a 2d array.
// and the index of max element.

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
    int d=ar[0][0];
    int i,j,maxi=0,maxj=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(d<ar[i][j])
            {
                d=ar[i][j];
                maxi=i;
                maxj=j;
            }
        }
    }
    printf("maximum value among elements is: %d\n",d);
    printf("The index of maximum element is (%d,%d)\n",maxi,maxj); 
    int s=ar[0][0];
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s>ar[i][j])
            {
                s=ar[i][j];
            }
        }
    }
    printf("minimum value among elements is: %d",s);
}