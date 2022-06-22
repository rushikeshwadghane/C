#include<stdio.h>
int main()
{
    int n=0,count=1;
    int i=2,j=0;
    printf("Enter number:");
    scanf("%d\n",&n);
    while (count!=n)
    {
            for(j=2;j<i;j++){
                if(i%j==0){
                    count++;
                    break;
                    
                }
               i=i+1;  
            } 
    }
     printf("%d",i); 

    return 0;   
}