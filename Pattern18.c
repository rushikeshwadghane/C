#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=iRow;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
          printf("*\t");
        }  
        printf("\n");
    }
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=i;j++)
        {
          printf("*\t");
        }  
        printf("\n");
    }
    
}

int main()
{
    int iValue1=0,iValue2=0;\
    printf("Enter row and Column:\n");
    scanf("%d%d",&iValue1,&iValue2);
    Display(iValue1,iValue2);

    return 0;
}