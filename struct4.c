#include<stdio.h>
#pragma pack(1)
#include<string.h>
struct demo
{
    int roll;
    char name[20];
    int mark[5];
    float prnt;
};
int main()
{
    int i=0;
    int count=0;
    float prnt = 0;
    struct demo arr[4];
   printf("Enter roll no of std:");
   scanf("%d",&arr[0].roll);
   printf("Enter name of std:");
   scanf("%s",&arr[0].name);
   printf("Enter mark of student:");
        for(i=0;i<5;i++){
               scanf("%d",&arr[0].mark[i]);
       count= count + arr[0].mark[i];  

        }
   
    
   //    printf("%d",count);
   
   prnt = ((float)count/500)*100;
   printf("%f", ((float)count/500));
   printf("Percentage of student: %s = %f",arr[0].name,prnt);
   return 0;


}   