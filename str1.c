#include<stdio.h>
int main()
{
    char Arr[20]="Rushikesh";
    char *ptr = Arr;
    printf("Element of string:\n");
    while (*ptr != '\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
    
    return 0;

}