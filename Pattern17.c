#include<stdio.h>
void Display(int n)
{
    int i=0,j=0, p=1,k=1;
    for(i=1;i<(2*n);i++)
    {
        for(j=1;j<(2*n);j++)
        {
            if(i==1||j==1||i==(2*n-1)||j==(2*n-1))
            {
                printf("%d ",n);
            }
            else if(i==n&&j==n)
            {
                printf("%d ",p);
            }            
            else if(i<n)
            {
                printf("%d ",(n+1)-i);
            }
            else if(i>n)
            {
                 printf("%d ",(i+1)-n);
            }
            else if(i==n&&j>n)
            {
                 printf("%d ",(j+1)-n);        
            }
            else if(i==n&&j<n) 
            {
                printf("%d ",(n+1)-j); 
            }       
        }
        printf("\n");
    }
}
int main()
{
    int iValue1;
    printf("Enter no of elements \n ");
    scanf("%d",&iValue1);
    Display(iValue1);

    return 0;
}