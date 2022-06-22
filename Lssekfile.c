#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[30];
    int fd=0;
    char Data[10];
    printf("Enter the file name:\n");
    scanf("%s",fname);

    fd = open(fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to create file\n");

        return -1;
    }
    else{
        printf("File is create Succesfully %d\n",fd);
    }

    lseek(fd,4,0);

    // 1: file Descripter kashat 
    //2: Displacement  kitine halchal
    //3: From Where  kuthun (0:strat of file )

    read(fd,Data,6);
   // print("Data from file:%s\n",Data);
     write(1,Data,6);
    close(fd);
    return 0;
}