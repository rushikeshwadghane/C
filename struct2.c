#include<stdio.h>
#pragma pack(1)
struct student
{
    int roll;
    char name[20];
    int mark[5];
    float avg;
};
int main()
{
    struct student obj;
    int sub = 1,count=0;
    float avg=0;
    printf("Enter student roll no:");
    scanf("%d",&obj.roll);
    printf("Enter name of student:");
    scanf ("%s",&obj.name);
     printf("Enter mark of student:");
     for(sub=1;sub<=5;sub++)
     {
        scanf("%d",&obj.mark[sub]);
    
        count= count+obj.mark[sub];
        avg= count/5;
     }   
    printf("Average of mark of student: %f\n",avg); 


        return 0;
}