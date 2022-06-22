#include<stdio.h>

int main()
{
    int n=0;
    int i=0,j=0;
    int temp=0;
    printf("Enter number : \n ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        temp=n;
        for (j=0;j<(n*i);j++)
        {
             if(j%i==0 && j>0)
             {
                 temp--;
             }  
            printf("%d ",temp);  
        }
        printf("$");
    }
    return 0;
}

 