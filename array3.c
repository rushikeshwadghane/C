#include<stdio.h>
int main()
{
    int n=0;
    int mark[100];
    int i=0;
    int j=0,k=0,sum=0;
    int gen=0;
    
    printf("Enter no of student:\n");
    scanf("%d",&n);
    printf("Enter mark of student\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&mark[i]);
    }
    printf("Enter gender for mark\nBoy's:1\nGirls:2\n");
    scanf("%d",&gen);
    switch(gen)
    {
        case 1:
            for(j=0;j<n;j++)
            {
                if(j%2==0){
                    sum=sum+mark[j];
                }
            }
            break;
        case 2:
            for(j=0;j<n;j++)

                {
                    if(j%2!=0){
                        sum=sum+mark[j];

                    }
                }
            break;

        default:
            printf("Invalid case\n");
            break;
    }

    printf("Mark od students:%d\n",sum);

    

    return 0;
}

