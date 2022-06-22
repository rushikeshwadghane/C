#include<stdio.h>
#include<stdbool.h>
void Diplay(int *ptr)
{
    int j=0;
      printf("Element of Array is\n");
   for(j=0;j<5;j++)
    {
       printf("%d\n",*ptr);
       ptr++;
    }
}
int main()
{
   
   int Arr[5];
   int i=0;
   printf("Enter element:\n");
   for( i=0;i<5;i++)
   {
   scanf("%d",&Arr[i]);
   }
    Diplay(Arr);
    return 0;
}


//*(Arr+2);
