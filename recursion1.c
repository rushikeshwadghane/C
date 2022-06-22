#include<stdio.h>
int Factorial(int iNo)
{
    static int iFact=1;
    if(iNo!=0)
    {
        iFact = iFact*iNo;
        iNo--;
        Factorial(iNo);
    }
    return iFact;
}
int main()
{
    int Value=0;
    int iret=0;
    printf("Enter number:");
    scanf("%d",&Value);
     iret = Factorial(Value);
     
    printf("Factorial of number is: %d\n",iret);

    return 0;
}