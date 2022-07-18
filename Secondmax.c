#include<stdio.h>
#include<stdlib.h>
int SecondMax(int Brr[],int Length)
{
    int max=0,smax=0,i=0;
    max=smax=Brr[0];
    for(i=0;i<Length;i++)
    {
        if(Brr[i]>max)
        {
            smax=max;
            max= Brr[i];
        }
        else if(Brr[i]>smax && Brr[i]!=max)
        {
            smax = Brr[i];
        }
    }
    return smax;
}
int main()
{
    int *Arr=NULL,Size=0,iRet=0;
    printf("Enter number of Element you want to enter:\n");
    scanf("%d",&Size);
    Arr=(int*)malloc(sizeof(Size));
    printf("Enter element of Arry:\n");
    for(int i=0;i<Size;i++)
    {
        scanf("%d",&Arr[i]);
    }
    iRet= SecondMax(Arr,Size);
    printf("Second Max number in Array is:%d\n",iRet);

    return 0;
}
