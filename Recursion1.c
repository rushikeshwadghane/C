#include<stdio.h>
/*
void DispalyI()
{
    for(int i=0;i<4;i++)
    {
        printf("* ");
    }

}*/
void DisplayR()
{
    static int i=0;
    if(i<4)
    {
         printf("* ");
        i++;
        DisplayR();
    
    }

}

int main()
{
    DisplayR();
    return 0;
}