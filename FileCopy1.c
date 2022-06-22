#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#define FILESIZE 1024

void FileConcate(char Source[],char Destination[])
{
    int Fdsrc=0,Fddest=0,iRet=0;
    Fdsrc = open(Source,O_RDONLY);
    char Buffer[FILESIZE];
    if(Fdsrc == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    Fddest = open(Destination,O_RDWR |O_APPEND);
    if(Fddest==-1)
    {
        printf("Unable to create file\n");
        return;
    }
    while((iRet=read(Fdsrc,Buffer,FILESIZE))!= 0)
    {
        write(Fddest,Buffer,iRet);
    }
}

int main()
{
    char Fname1[20],Fname2[20];
    printf("Enter file name which Contain data:\n");
    scanf("%s",Fname1);

    printf("Enter file name in that you want to copy:\n");
    scanf("%s",Fname2);

    FileConcate(Fname1,Fname2);


    return 0;
}