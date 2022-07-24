#include<stdio.h>
#include<stdlib.h>

void Duplicate(int Brr[],int length)
{
   int temp=0;
    for(int i=0;i<length;i++)
    {
       
      for(int j=0;j<length-i-1;j++)
      {
        if(Brr[j] > Brr[j+1])
        {
            temp = Brr[i];
            Brr[i] = Brr[j+1];
            Brr[j+1] = temp;
        }
      }
    }
    printf("After sort\n");
    for(int l=0;l<length;l++)
    {
        printf("%d ",Brr[l]);
    }

    printf("\nDuplicate element\n");
    for(int k=0;k<length-1;k++)
    {
        if(Brr[k]==Brr[k+1])
        {
            printf("%d ",Brr[k]);
        }
    }
}
int main()
{
    printf("Enter how much element you want to enter:\n");
    int size=0,n=0,i=0;
   scanf("%d",&size);
    int *Arr = NULL;
    Arr = (int*)malloc(size * sizeof(int));

    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }
    Duplicate(Arr,size);

    return  0;
}