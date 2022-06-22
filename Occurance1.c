#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int LastOccurance(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    for(iCnt=(iLength-1);iCnt>=0;iCnt--)
    {
        if (Arr[iCnt]==iNo)
        {
            break;
        }        
    }
  return iCnt;
    
}
int main()
{  
    int *ptr=NULL;
    register int iCnt=0;
    int iSize=0,iValue=0;
    int  iRet=0;
    printf("Enter number of elemet:\n");
    scanf("%d",&iSize);
  
    ptr= (int*)malloc(iSize * sizeof(int));

    printf("Entr element:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to search:");
    scanf("%d",&iValue);

    iRet= LastOccurance(ptr,iSize,iValue);
    
    if(iRet== -1)
    {
        printf("There is no such element");
    }
    else{
        printf("%d element last occure in array at index number: %d\n",iValue,iRet);
    }

    free(ptr);
    return 0;
}