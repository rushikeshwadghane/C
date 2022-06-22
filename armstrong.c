#include<stdio.h>
int main()
{
    int n=0,digit=0,sum=0,temp=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        digit = temp%10;
        sum=sum+(digit*digit*digit);
        temp=temp/10;

    }
    if(n==sum)
        printf("%d is armstoing number.\n",n);
    
    else
        printf("%d is not  armstrong number.\n",n);
    
    return 0;
    
}