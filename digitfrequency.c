#include<stdio.h>
int main()
{
   char str[30];
   int i=0,l=0,j=0;
   int count=0;
   printf("Enter string:\n");
   scanf("%s",str);
   printf("%s",str);
   printf("Length=  %d\n",strlen(str));
   for(i=0;i<10;i++)
   {
       count=0;
       for(j=0;j<=strlen(str);j++)
       {
           if(str[j]==i+'0'){
               count++;
           }
       }
       printf("%d",count);
   }
   return 0;
}    


