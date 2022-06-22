#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iLenght)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;
}
int main()
{  
    int *ptr=NULL;
    register int iCnt=0;
    int iSize=0,iRet=0;
    printf("Enter number of elemet:\n");
    scanf("%d",&iSize);

    ptr= (int*)malloc(iSize * sizeof(int));

    printf("Entr element:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet =Addition(ptr,iSize);

    printf("Addition of given number is:%d\n",iRet);

    free(ptr);
    return 0;
}