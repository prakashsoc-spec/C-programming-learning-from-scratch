// wap to print the row number having the maximum sum in a given martix.
 #include<stdio.h>
 int main()
 {
    int a[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter %d row %d element: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    int sum,s=0,d=0,f;
     for(int i=0;i<4;i++)
    {
        sum =0;
        for(int j=0;j<4;j++)
        {
            sum+=a[i][j];
        }
        s=sum;
        if(s>d)
        {
            d=s;
            f=i;
        }
    }
    printf("the maximum sum is %d\n",d);
    printf("Row number is %d",f+1);
 }