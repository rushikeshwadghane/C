#include<stdio.h>
int CountDigit(int iNo)
{
    int iDigit=0,count=0;
    while (iNo!=0)
    {
        iDigit= iNo%10;
        count++;
     
        iNo= iNo/10;
    }
    return count;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    iRet =  CountDigit(iValue);
    printf("Count of Digit :%d \n",iRet);
    return 0;
}   