#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdbool.h>
#define FILESIZE 1024

int main()
{
    char Fname1[20];
    int fd =0;
    char Data[10];
    printf("Enter file name:\n");
    scanf("%s",Fname1);
    fd = open(Fname1,O_RDONLY);  
    // 0 starting point
    /// 1 current position
    // 2 end point
    lseek(fd,10,0);

    read(fd,Data,5);
    write(1,Data,5);
    return 0;
}