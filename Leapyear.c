#include<stdio.h>

int main()
{
    int year=0,n=0;
    printf("Enter year and n\n");
    scanf("%d%d",&year,&n);

    int i=0,count=0;

    for(i=year;i>count;i++)
    {
        if(i%4==0 && i%100!=0 || i%400==0)
        {
            printf("%d\n",i);
            count++;
        }
        if(count==n)
        {
            break;
        }
    }


    return 0;
}