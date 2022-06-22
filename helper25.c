#include"header25.h"
ULONG Power(int iNo1,int iNo2)
{
    ULONG iPower=1;
     register int iCnt=0;
    for(iCnt=0;iCnt<iNo2;iCnt++)
    {
        iPower = iPower*iNo1;
    }
    return iPower;
}