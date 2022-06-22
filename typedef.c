//Power of number:
#include<stdio.h>
typedef unsigned long int ULONG;

unsigned long int Power(int iNo1,int iNo2)
{
    ULONG iPower=1;
     register int iCnt=0;
    for(iCnt=0;iCnt<iNo2;iCnt++)
    {
        iPower = iPower*iNo1;
    }
    return iPower;
}
int main()
{
   auto int iValue1=0,iValue2=0;
    printf("Enter two number:\n");
    scanf("%d %d",&iValue1,&iValue2);
    ULONG iRet=0;
    iRet= Power(iValue1,iValue2);
    printf("%d Power %d is: %ld\n",iValue1,iValue2,iRet);
    return 0;
}
