#include<stdio.h>
#include<malloc.h>
int main()
{
    int*ptr= NULL;
    
    ptr= (int*)malloc(sizeof(int));
    *ptr=11;
    printf("The value of ptr is: %d",*ptr);

    free(ptr);

    return 0;
}