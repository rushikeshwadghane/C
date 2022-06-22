#include<stdio.h>
int SumofFact(int iNo)
{
    int iCnt=0,iAns=0;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0){
            iAns=iAns+iCnt;
        }           
    }
    return iAns;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter a number: ");
    scanf("%d",&iValue);
    iRet= SumofFact(iValue);
    printf("Sum of factors: %d\n",iRet);
    return 0;
}