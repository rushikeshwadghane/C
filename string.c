#include<stdio.h>
#include<string.h>
int main()
{
    char Arr[5]={'a','b','c','d','\0'};

    char Brr[5]="abcd";

    printf("Element in string:%s\n",Arr);
    printf("Element in string:%s\n",Brr);

    printf("Size if string:%d\n",sizeof(Arr));
    printf("Size if string:%d\n",sizeof(Brr));

    printf("lenth of string:%d\n",strlen(Arr));


    return 0;
}