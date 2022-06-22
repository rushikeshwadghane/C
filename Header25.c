#include"header25.h"

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
