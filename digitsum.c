#include<stdio.h>
int main()
{
    int n=0,sum=0,r=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
    r= n%10;
    sum = sum+r;
    n= n/10;
    }
    printf("sum of digit in n: %d\n",sum);

    return 0;
}