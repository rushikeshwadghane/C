#include<stdio.h>
void PrintNo(int iNo)
{
    static int i=1;
    if(i<=iNo)
    {
        printf("%d ",i);
        i++;
        PrintNo(iNo);

    }
}
int main()
{
    int n=0;
    printf("Enter number:");
    scanf("%d",&n);
    PrintNo(n);
    return 0;
}