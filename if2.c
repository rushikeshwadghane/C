#include<stdio.h>
int main()
{
    int istd = 0;
    printf("Enter your standerd:\n");
    scanf("%d",&istd);

    if(istd==1)
    {
        printf("Your exam is at:8\n");
    }
    else if(istd==2)
    {
         printf("Your exam is at:9\n");
    }
      else if(istd==3)
    {
         printf("Your exam is at:10\n");
    }
      else if(istd==4)
    {
         printf("Your exam is at:11\n");
    }
      else if(istd==5)
    {
         printf("Your exam is at:12\n");
    }
      else
    {
         printf("Invalid standard\n");
    }
    return 0;
}