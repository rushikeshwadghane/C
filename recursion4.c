#include<stdio.h>

int Sum(int iNo)
{
    static int isum=0;
    int i=0;
    if(iNo!=0)
    {
        i=iNo%10;
        isum = isum+i;
        iNo = iNo/10;
        Sum(iNo);
    }
    return isum;
}

int main()
{
    int value=0;
    int iret=0;

    printf("Enter no:\n");

    scanf("%d",&value);
      iret = Sum(value);
    printf("Sum of Digit:%d\n",iret);
    return 0;
}