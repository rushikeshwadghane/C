#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char fname[30];
    int fd=0;
    char Data[10];
    int iret=0;
    printf("Enter the file name:\n");
    scanf("%s",fname);
    fd = open(fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to create file\n");

        return -1;
    }
    printf("File is Opend Succesfully FD: %d\n",fd);
    while((iret = read(fd,Data,sizeof(Data)))!=0)
    {
        write(1,Data,iret);
    }

    close(fd);
     return 0;
}