#include<stdio.h>
int main()
{
    int n=0,i=0,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        sum=(n*i);
        printf("%d \n",sum);

    }

    return 0;
}