#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter number:");
    scanf("%d",&n);
    if((n%2==0) && (n%100!=0) || (n%400==0))
    {
        printf("%d is a Leap year.\n",n);
    }
    else{
        printf("%d is not Leap year.\n",n);
    }




    return 0;
}