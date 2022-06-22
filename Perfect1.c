#include<stdio.h>
int Perfect(int iNo)
{
    int iCnt=0,iAns=0;
    for(iCnt=1;iCnt<=(iNo/2) && (iAns<=iNo);iCnt++)
    {
        if(iNo%iCnt==0){
            iAns=iAns+iCnt;
        }
    /*    if(iAns > iNo)
        {
            break;
        } 
        */          
    }
    return iAns;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter a number: ");
    scanf("%d",&iValue);
    iRet= Perfect(iValue);
    if(iValue==iRet)
    {
        printf("%d is a perfect Number \n",iRet);
    } 
    else{
      printf("%d is not  perfect Number \n",iValue);
    }   
    return 0;
}