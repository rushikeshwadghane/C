#include<stdio.h>
#include<stdlib.h>
int CheckFrequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
     int iCount=0;
     
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{  
    int *ptr=NULL;
    register int iCnt=0;
    int iSize=0,iRet=0,iValue=0;
    printf("Enter number of elemet:\n");
    scanf("%d",&iSize);
    printf("Enter no for Check occurance:");
    scanf("%d",&iValue);
    ptr= (int*)malloc(iSize * sizeof(int));

    printf("Entr element:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet =CheckFrequency(ptr,iSize,iValue);

    printf("%d is in array %d times.\n",iValue,iRet);

    free(ptr);
    return 0;
}