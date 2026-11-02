// Create a structure 'date' that contains three members namely date, month and year. 
// Create 2 structure variables with different dates and now compare the two. If the dates are equal then display message as 'Equal' otherwise 'Unequal

#include<stdio.h>
#include<stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;

    }time;

    time a,b;
    a.day=20;
    a.month=9;
    a.year=2007;

    b.day=12;
    b.month=3;
    b.year=2009;

    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag==true) printf("Dates are equal");
    else printf("dates arenot equal");
}