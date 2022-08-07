#include<stdio.h>
void Rotate(int arr[],int k,int n)
{
    while(k !=0)
    {
        int temp = arr[0];
        for(int i=0;i<(n-1);i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = temp;

        k--;
    }

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int l = sizeof(arr)/ sizeof(arr[0]);
    int k=0;
    for(int i=0;i<l;i++)
    {
        printf("%d ",arr[i]);
    }
      printf("\n");
    printf("Enter rotation key:\n");
    scanf("%d",&k);
    Rotate(arr,k,l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
        return 0;
}