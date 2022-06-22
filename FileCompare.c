#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdbool.h>
#define FILESIZE 1024

bool FileCompare(char Source[],char Destination[])
{
    int Fdsrc=0,Fddest=0,iRet1=0,iRet2=0;
    int iCmp=0;
    Fdsrc = open(Source,O_RDONLY);
    char Buffer1[FILESIZE];
    char Buffer2[FILESIZE];
    if(Fdsrc == -1)
    {
        printf("Unable to open file\n");
        return false;
    }
    Fddest = open(Destination,O_RDONLY);
    if(Fddest==-1)
    {
        printf("Unable to open Destination file\n");
        return false;
    }
    while(1)  //unconditional loop
    {
        iRet1= read(Fdsrc,Buffer1,FILESIZE);
        iRet2= read(Fddest,Buffer2,FILESIZE);
        if((iRet1==0) ||(iRet2==0)||(iRet1 != iRet2))
        {
            break;
        }
        iCmp = memcmp(Buffer1,Buffer2,iRet1);
        if(iCmp!=0)
        {
            break;
        }
    }
    if(iRet1==0 && iRet2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    close(Fdsrc);
    close(Fddest);
}

int main()
{
    char Fname1[20],Fname2[20];
    printf("Enter file name which Contain data:\n");
    scanf("%s",Fname1);
    bool Bret;
    printf("Enter file name in that you want to copy:\n");
    scanf("%s",Fname2);
    FileCompare(Fname1,Fname2);
    if(Bret == true)
    {
        printf("Files are same\n");
    }
    else
    {
        printf("Files are Diffrent");
    }
    return 0;
}