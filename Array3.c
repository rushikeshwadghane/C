#include<stdio.h>
#include<stdlib.h>

int Sumation(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum = iSum+ Arr[iCnt];
    }

    return iSum;
}


int main()
{
    int iLength=0;
    int iCnt=0,iRet=0;
    printf("Enter no od element :\n");
    scanf("%d",&iLength);
    
    int *ptr = NULL;
    ptr = (int*)malloc (sizeof(int)*iLength);

    printf("Enter the Value of array:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Sumation(ptr,iLength);

    printf("Addition is :%d\n",iRet);

    return 0;
}