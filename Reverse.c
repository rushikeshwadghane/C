#include<stdio.h>
int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0; 
    while (iNo>0)
    {
        iDigit=iNo%10;
        iRev = iRev*10+iDigit;
        iNo = iNo/10;
    }
    return iRev;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    iRet =  Reverse(iValue);
    printf("Reverse Number is :%d \n",iRet);
    return 0;
}   