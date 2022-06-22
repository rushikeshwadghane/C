#include<stdio.h>
int main()
{
    int n=0,i=0,p=0,k=0;
    printf("Enter a number:");
    scanf("%d",&n);
   // printf("Prime numbers:");
    {
        for(i=2;i<n;i++){
            if(n%i==0)
            break;
        }
         
    } 
     if(i==n)
          {
              printf("%d is a prime,",n);
          }
      else{
          printf("%d It is not prime",n);
      }    
    printf("\n");   
return 0;
}