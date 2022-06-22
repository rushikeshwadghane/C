#include<stdio.h>
int main()
{
    int i=0;
    int n=0;
    int mark[100];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter mark;\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&mark[i]);
    }

    return 0;
}
