#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char fname[20];
    char Data[100];
    int iret=0;
    int fd =0; //File Descripter 
    printf("Enter file name to open:\n");
    scanf("%s",fname);
    fd = open(fname,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open file \n");
        return -1;
    }
    
        printf("File is Open succesfully:%d\n ",fd);
    
        return 0;
}
    