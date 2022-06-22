#include<stdio.h>
int main()
{
    int n=0,i=0,j=0, counter=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=0;i<(n*2)-1;i++)
    {
        counter=0;
        for(j=0;j<(n*2)-1;j++)
        {
            printf("%d\t", n-counter);
            if((j<i && n-i>0) || (n-i<=0 && (((n*2)-1)-i) > j+1)){
                counter++;
            // }else if(){
            //     counter++;
            // }else if (n-i<=0 && j-i >=0 ){
            //     counter--;
            }else if( (i!=0 && n-i>0 && (((n*2)-1) - i)-1 <= j) || (n-i<=0 && j-i >=0)){
                counter--;
            }
                        
        }
        printf("\n");
    }




    return 0;
}