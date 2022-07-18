#include<stdio.h>
void Display(int no)
{
    int a=0,b=1,c=0,i=0;
    if(no==0 || no==1)
    {
        printf("%d\n",a);
        return;
    }
    printf("%d,%d,",a,b);
        for(i=2;i<no;i++)
        {
            c = a+b;
            a=b;
            b=c;
            printf("%d,",c);
        }
    printf("\n");
}
int main()
{
    int n=0;
    printf("Enter how many term you want to print:");
    scanf("%d",&n);

    Display(n);

    return 0;
} 