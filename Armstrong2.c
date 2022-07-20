#include<stdio.h>
int Perfect(int iNo)
{
    int i=0,iAns=0,idigit=0;
    int temp = iNo;
    while(temp!=0)
    {
        idigit = temp%10;
        idigit = idigit*idigit*idigit;
        iAns=iAns+idigit;
        temp = temp/10;
        if(iAns>iNo)
        {
            break;
        }
    }
   
    return iAns; 
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter a number: ");
    scanf("%d",&iValue);
    iRet= Perfect(iValue);
    if(iValue == iRet)
    {
        printf("%d is a Armstrong  Number \n",iRet);
    } 
    else{
       printf("%d is not  Armstrong Number \n",iValue);
    }   
    return 0;
}