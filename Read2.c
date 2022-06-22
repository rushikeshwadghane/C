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
    printf("File is Opend Succesfully: %d\n",fd);
     iret= read(fd,Data,10);
     printf("%d bytes gets Succesfully Read:\n",iret);

     printf("Data from file is:\n");
     write(1,Data,iret);
     printf("\n");
     /* reserv file Descripter
     o - STDIN  - Keyboard
     1 STDOUT  - Moniter 
     2 STDERR  - MOniter  */
     return 0;
}