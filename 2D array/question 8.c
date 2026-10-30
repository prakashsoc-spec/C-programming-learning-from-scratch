// Given a matrix having 0-1 only, find the row with the maximum number of 1's.
#include<stdio.h>
 int main()
 {
    int a[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter %d row %d element: ",i+1,j+1);
            scanf("%1d",&a[i][j]);
        }
    }
    int sum,s=0,d=0,f;
     for(int i=0;i<4;i++)
    {
        sum =0;
        for(int j=0;j<4;j++)
        {
            if(a[i][j]==1)
            {
                sum+=1;
            }
        }
        s=sum;
        if(s>d)
        {
            d=s;
            f=i;
        }
    }
    printf("the maximum no of 1's is %d\n",d);
    printf("Row number is %d",f+1);
 }