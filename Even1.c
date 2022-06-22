#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo)
{
    if (((iNo%3)==0) && ((iNo%5)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter number:");
    scanf("%d",&iValue);
    bRet=Check(iValue);
    if (bRet==true)
    {
        printf("%d is Divisible by 3 & 5",iValue);
    }
    else
    {
         printf("%d is not Divisible by 3 & 5",iValue);
    }
    return 0;
}