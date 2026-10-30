// Given a matrix a of dimension n*m and 2 coordinated (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) and (l2,r2).
// suppose the matrix is a[3][4]. and the coordinates are (0,1) to (2,4). so we simply need
// to change some things in loops.

#include<stdio.h>
int main()
{
    int a[4][5];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("Enter %d row %d element: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    // printing sum from one coordinates to another.
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=1;j<5;j++)
        {
            sum+=a[i][j];
        }
    }

    printf("the sum is %d",sum);
    return 0;
}