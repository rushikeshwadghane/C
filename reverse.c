#include<stdio.h>
int main()
{
    int n=0,rev=0,r=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
    r= n%10;
    n= n/10;
    rev = rev*10+r;

    }
    printf("reverse of digit in n: %d\n",rev);

    return 0;
}