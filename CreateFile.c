#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char fname[20];

    int fd =0; //File Descripter 
    printf("Enter file name to create:\n");
    scanf("%s",fname);
    
    fd = creat(fname,0777);
    if(fd==-1)
    {
        printf("Unable to crate the file \n");
        return -1;
    }
    else
    {
        printf("File is create succesfully:%d\n ",fd);
    }
    return 0;
}
    