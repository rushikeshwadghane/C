#include<stdio.h>
int main()
{
    int n=0,rev=0,r=0,temp=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
    r= temp%10;
    temp= temp/10;
    rev = rev*10+r;
    }
if(rev==n){
    printf("%d is a palindrome\n",n);
}
else{
    printf("%d is not palindrome.\n",n);
}    
    return 0;
}