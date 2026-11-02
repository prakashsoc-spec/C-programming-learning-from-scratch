// Create a structure to specify data on students with these attributes: Roll number, Name, Department, Course, Year of joining.
//  Create 2 structure variables.
//   Now, create a function to check if two students have the same Department. Pass the two structure variable as input to this function.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct student
{
    char department[20];
    char course[20];
    char name[20];
    int YOJ;
} student;

void check(student a, student b)
{
    bool dot=true;
    if(a.department!=b.department) dot=false;
    if(dot==true)
    {
        printf("Department is same");
    }
    else{
        printf("department is not same");
    }

}

int main()
{
    student s1, s2;
    strcpy(s1.name, "Manoj");
    strcpy(s2.name, "manish");

    strcpy(s1.department, "computer");
    strcpy(s2.department, "bioogy");

    strcpy(s1.course, "cyber");
    strcpy(s2.course, "plantbio");
   
    s1.YOJ=2001;
    s2.YOJ=2002;

    check(s1,s2);
}