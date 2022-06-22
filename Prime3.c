#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int iNo)
{
    bool bFlag=true;
    int iCnt=0;
    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            bFlag=false;
        }
    }
    return bFlag;
}
int main()
{
    int iValue=0;
    bool bRet= false;
    printf("Enter Number: ");
    scanf("%d",&iValue);
    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a prime number.\n",iValue);
    }
    else
    {
         printf("%d is not a prime number.\n",iValue);
    }
    return 0;
}