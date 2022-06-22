#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size=0;
    int *ptr= NULL;

    printf("Enter a element: ");
    scanf("%d",&size);

    ptr= (int *) calloc(size ,sizeof(int));

    if(ptr==NULL){
        printf("Unable to allocate memory \n");
    }
    else{
        printf("Memory allocate succesfully \n");
    }


    free(ptr);

    return 0;               
}