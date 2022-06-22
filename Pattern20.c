#include<stdio.h>
void Display(int iNo)
{
    int i=0,j=0,p=1;
    for(i=1;i<=iNo;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",p); 
            p++;
        if(p>iNo)
        {
            return;
        }  
        }
        printf("\n");
      
    }
}

int main()
{
    int iValue1;
    printf("Enter no of elements\n");
    scanf("%d",&iValue1);
    Display(iValue1);

    return 0;
}