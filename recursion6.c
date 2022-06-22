
#include<stdio.h>

void Countcapital(char *str)
{
   if(*str!='\0')
   {
        printf("%s\n",str);
       Countcapital(str+1);
   }
   
}

int main()
{
    char Arr[30];
    printf("Enter String:\n");
    scanf("%[^\n]s",Arr);
    
     Countcapital(Arr);
 //   printf("Small  character in String: %d",iret);
    return 0;
}