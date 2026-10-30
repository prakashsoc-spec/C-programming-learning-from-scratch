#include<stdio.h>
int main()
{
    int ar[3][3]={{1,2,3},{3,4,5},{5,6,7}};
    //we can also do this type of iniatialization in multidimensional array.
    //123
    //345
    //567

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
}