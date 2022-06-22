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
    printf("Enter file name to create:\n");
    scanf("%s",fname);
    printf("Enter the data that you want to write:\n");
    scanf(" %[^'\n']s",Data);
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
      iret = write(fd,Data,strlen(Data));

            printf("%d byte data written in file\n",iret);

    return 0;
}
    