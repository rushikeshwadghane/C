#include<stdio.h>
#include<string.h>
struct demo
{
    char subject[10];
    int mark;
};
struct Student
{
    char name[10];
    int roll;
    struct demo dobj;
};

struct Student add()
{
    struct Student stemp;
    struct demo dtemp;
    int rollno=0,marks=0;\
    char Name[10],Subject[10];
    printf("Enter ");
}

int main()
{
    struct Student sobj[20];
    int n=0,std=0;
    printf("Enter number of student:");
    scanf("%d",&n);
    for(std=0;std<n;std++){
        sobj[std]=add();    
    }
}