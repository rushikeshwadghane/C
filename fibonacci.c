#include<stdio.h>
int main(){
    int count=2,a=0,b=1,n=0,c=0;
    printf("Enter how many term you want to print:");
    scanf("%d",&n);
    printf("%d,%d,",a,b);
    while(count<n){
        c=a+b;
        a=b;
        b=c;
        printf("%d,",c);
        count++;    

    }
    return 0;
} 