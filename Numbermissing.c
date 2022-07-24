#include<stdio.h>
#include<stdlib.h>

void Duplicate(int Brr[],int n)
{
    int total=0;
    total = (n + 1) * (n + 2) / 2;
    printf("%d\n",total);
     for (int i = 0; i < n; i++)
        total =total- Brr[i];
    printf("%d ",total);   
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

    return 0;
    
}