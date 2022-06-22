
#include<stdio.h>

int Countcapital(char *str)
{
    static int iCnt=0;
   if(*str!='0')
   {
       if((*str>='a')&&(*str<='z'))
       {
           iCnt++;
       }
       str++;
       Countcapital(str);
   }
   return iCnt;
}

int main()
{
    char Arr[30];
    printf("Enter String:\n");
    scanf("%[^\n]s",Arr);
    
    int iret = Countcapital(Arr);
    printf("Small  character in String: %d",iret);
    return 0;
}