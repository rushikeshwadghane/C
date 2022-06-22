#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(int iNo)
{
    int iDigit=0;
    int temp = iNo;
    int iRev=0; 
    while (iNo>0)
    {
        iDigit=iNo%10;
        iRev = iRev*10+iDigit;
        iNo = iNo/10;
    }
    if(temp==iRev)
    {
        return true;
    }
    else{
        return false;
    }   
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter number: ");
    scanf("%d",&iValue);
    bRet= CheckPalindrome(iValue);
    if(bRet==true)
    {
         printf("%d is a palindrome.",iValue);
    }
    else
    {
      printf("%d is not a palindrome.",iValue);

    }
    return 0;
}   