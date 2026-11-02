#include <stdio.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;

    } time;

    time a, b, c;
    a.day = 20;
    a.month = 9;
    a.year = 2007;

    b.day = 12;
    b.month = 3;
    b.year = 2009;

    bool flag = true;
    if (a.day != b.day)
        flag = false;
    if (a.month != b.month)
        flag = false;
    if (a.year != b.year)
        flag = false;

    if (flag == true)
        printf("Dates are equal");
    else
        printf("dates arenot equal");

    c = a;
    bool check = true;
    if (a.day != c.day)
        check = false;
    if (a.month != c.month)
        check = false;
    if (a.year != c.year)
        check = false;

    printf("\n");
    if (check == true)
        printf("Dates are equal");
    else
        printf("dates arenot equal");
}