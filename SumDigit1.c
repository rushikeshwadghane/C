#include<stdio.h>
int SumDigit(int iNo)
{
    int iDigit=0,count=0;
    while (iNo!=0)
    {
        iDigit= iNo%10;
        if(iDigit%2==0)
        {
             count = count+iDigit;
        }
       
        iNo= iNo/10;
    }
    return count;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    iRet =  SumDigit(iValue);
    printf("Sum of Digit :%d \n",iRet);
    return 0;
}   