#include<stdio.h>
void Display(int iNo)
{
    int i=0,j=0,l=0,k=1;
    for(i=1;i<=iNo;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((j%2==0) && (i%2==0) ||(i%2!=0) && (j%2!=0))
            {
                printf("%d ",k);
            }
            else if((i%2==0) && (j%2!=0))
            {
                printf("%d ",l);
            }
            else{
                printf("%d ",l);
            }            
        }
        printf("\n");
    }
}
int main()
{
    int iValue=0;
    printf("Enter  the value:\n ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;   
}