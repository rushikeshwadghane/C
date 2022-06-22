#include<stdio.h>
int main()
{
    char s[1000];
    int i=0;
    printf("Enter a string:\n");
    scanf("%[^\n]%*c",s);
    printf("%s",s);
  for(i=0;i<strlen(s);i++)
    {
        printf("%c",s[i]);
        if(s[i]==' '){
            printf("\n");
        }

    }
    



    return 0;
}