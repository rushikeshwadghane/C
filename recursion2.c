#include<stdio.h>

int Sum(int Brr[],int iNo)
{
    static int iSum=0;
    
    if(iNo>0)
    {
        iSum = iSum+Brr[iNo-1];
        iNo--;
        Sum(Brr,iNo);
    }
    return iSum;
}
int main()
{
    int Arr[]={10,20,30,40};
    int iret=0;
  //  printf("Enter number:");
   // scanf("%d",&Value);
     iret = Sum(Arr,4);

    printf("Sumation of number is: %d\n",iret);

    return 0;
}