#include<stdio.h>

int Fibonacci(int Pos)
{
    int i=0,l=0,m=1,sum=0;
    if(Pos==1)
    {
        return sum=0;
    }
    if(Pos == 2)
    {
        return m;
    }
    for(i=2;i<Pos;i++)
    {
        sum = l+m;
        l=m;
        m=sum;
    }
    return sum;
}
int main()
{
    int pos=0;
    printf("Enter position number you to print in fibonacci series:\n");
    scanf("%d",&pos);

    int iret = Fibonacci(pos);
    printf("%d: is number in that position\n",iret);

    return 0;

}