#include<stdio.h>
int main(){
    int arr[20],i=0,j=0,temp=0;
    int n=0,num=0;
    printf("Enter how many element you want to print:");
    scanf("%d",&n);
    for(num=0;num<n;num++){
        scanf("%d",&arr[num]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }



    return 0;
}