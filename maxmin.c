#include<stdio.h>
int main()
{
    int element[100],max=0,min=0;
    int num=0,i=0;
    printf("Enter the number of element in set:\t");
    scanf("%d",&num);
    printf("Enter %d element in set\n", num);
    
    for(i=0;i<num;i++){
        scanf("%d",&element[i]);
    }
    max=min=element[0]; 
     for(i=1;i<num;i++){
         if(element[i]>max)
            max=element[i];
         else if (element[i]<min)
            min=element[i];
     }

    printf("maximum number is:\t%d\n",max);
    printf("minimum number is:\t%d\n",min);
    return 0;
}