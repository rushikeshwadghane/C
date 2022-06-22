#include<stdio.h>
#include <string.h>

struct Mark
{
    char subject;
    int mark;
};
struct Student
{
    char name[10];
    int roll;
    struct Mark marks;
};

struct Student add(){
    struct Student temp;
    struct Mark mark_temp;
    int rollNo = 0, marks=0;
    char name, subject;

    printf("\nEnter Roll NO, Name, Subject, Marks : ");
    scanf("%d%s%s%d", &rollNo, name, subject, &marks);
    printf("%d\n%s\n%s\n%d", rollNo, name, subject, marks);
    mark_temp.mark = marks;
    strcpy(mark_temp.subject, subject);
    temp.roll = rollNo;
    strcpy(temp.name, name);
    temp.marks =  mark_temp;
    return temp;
};

void display(struct Student obj[], int n){
    for(int i=0; i< n;i++){
        printf("\n%s", obj[i].name);
    }
}


int main()
{
    struct Student obj[10];
    int sub = 0;

    obj[0] = add();
    obj[1] = add();
    display(obj, 2);




    return 0;
}