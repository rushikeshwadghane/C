#include<stdio.h>
int Addtion(int iNo)
{
    int iCnt=0,sum=0,Ans=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {               
        Ans=Ans+iCnt;
    }
    return Ans;
}
int main(){
   int iValue=0,iret=0;
   printf("Enter no: ");
   scanf("%d",&iValue);

   iret= Addtion(iValue);
   printf("Addition is:%d\n",iret);

    return 0;
}