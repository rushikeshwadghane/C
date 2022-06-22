#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Search(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    bool bFlag=false;
     
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
            bFlag=true;
            break;
        }
    }
    return  bFlag=true;
}
int main()
{  
    int *ptr=NULL;
    register int iCnt=0;
    int iSize=0,iValue=0;
    bool bRet=false;
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

    bRet =Search(ptr,iSize,iValue);

    if(bRet==true){
        printf("%d is Exists in array.\n",iValue);
    }
    else{
          printf("%d does not  Exists in array.\n",iValue);
    }

    free(ptr);
    return 0;
}