#include<stdio.h>
int main(){
    int i=0,count=1,sum=0;
    int n=0,j=1;
    printf("Enter how many number you want to prrint:");
    scanf("%d",&n);
    while(count<=n){
        for(i=1;i<j;i++){
            if(j%i==0){
            sum=sum+i;
            } 
        }        
        if(sum==j){
        printf("%d,",j);
            count++;
            }
        sum=0,j++;
    } 
return 0;
}