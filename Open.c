#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[30];
    int fd=0;


    printf("Enter the file name:\n");
    scanf("%s",fname);
    fd = open(fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to create file\n");
    }
    else{
        printf("File is create Succesfully %d\n",fd);
    }
    return 0;
}