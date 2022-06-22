#include<stdio.h>

void Display(int iNo)
{
    static char ch ='a';    
    
    if(iNo>0)
    {   
        printf("%c ",ch);
        ch++;
        iNo--;              
        Display(iNo);
    }
}
int main()
{
    int value=0;
    int iret=0;

    printf("Enter no:\n");

    scanf("%d",&value);
    Display(value);
   // printf("Display of Digit:%d\n",iret);
    return 0;
}