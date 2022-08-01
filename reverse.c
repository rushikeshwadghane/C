#include<stdio.h>
#include<string.h>


void reverse(char *ptr)
{
    int length = strlen(ptr);
    int temp=0;
    for(int i=0;i<length/2;i++)
    {
       temp = ptr[i];
       ptr[i]= ptr[length-1-i];
       ptr[length-1-i]= temp; 
    }
}
int main()
{
    char Arr[30];
    printf("Enter String:\n");

    scanf("%[^\n]s",Arr);

    reverse(Arr);

    printf("%s",Arr);   
}