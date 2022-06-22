#include<stdio.h>
int main(){
    int i=0,n=0,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(n==sum){
        printf("%d is perfect number\n",n);
    }
    else{
        printf("%d is not perfect number\n",n);
    }
    return 0;
}