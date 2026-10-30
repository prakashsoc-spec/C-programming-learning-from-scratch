//write a program to store roll number and marks obtained by 4 students side by side in a matrix.
#include<stdio.h>
int main()
{
    int a=1,i,j,k;
    int ar[4][1];
    for(i=0;i<4;i++)
    {
        for(j=0;j<=0;j++)
        {
            printf("Enter Roll no of %d student: ",a);
            scanf("%d",&ar[i][j]);
        }
        
        for(k=j;k<=1;k++)
        {
            printf("Enter marks of %d student: ",a);
            scanf("%d",&ar[i][k]);
            printf("\n");
        }
        a++;
    }

    printf("Students roll no marks");
    printf("\n");
    int v=1;
    for(int s=0;s<4;s++)
    {
        printf(" %d",v);
        for(int d=0;d<2;d++)
        {
            printf("\t");
            printf(" %d",ar[s][d]);
            printf(" ");
        }
        printf("\n");
        v++;
    }

}
