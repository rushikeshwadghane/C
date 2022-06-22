#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int j=0;
    printf("Element of Array is\n");    
   for(j=0;j<iLength;j++)
    {
       printf("%d\n",Arr[j]);;   
    }
}
int main()
{  
    int *ptr=NULL;
    register int iCnt=0;
    int iSize=0;
    printf("Enter number of elemet:\n");
    scanf("%d",&iSize);
    ptr= (int*)malloc(iSize * sizeof(int));
    printf("Entr element:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    Display(ptr,iSize);
    return 0;
}