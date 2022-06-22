#include<stdio.h>
int main(){

int mark[200],s=0,i=0,sum=0;
float avg=0;
printf("Enter number of student:");
scanf("%d",&s);
printf("Enter mark of student:\n");
for(i=0;i<s;i++)
{
    scanf("%d",&mark[i]);
}
for(i=0;i<s;i++){
sum = sum+mark[i];
}
printf("Average of Mark:\n");
avg= sum/s ;
printf ("%f",avg);


    return 0 ;
}