#include"operatio.h"


int main()
{
    int no1=0,no2=0;
    printf("Enter two no:");
    scanf("%d %d",&no1, &no2);

    int ret1=0,ret2=0;

    ret1=Addition(no1,no2);
    ret2= multiplication(no1,no2);

    printf("Addition is :%d\n",ret1);
    printf("Multiplication is:%d\n",ret2);




    return 0;
}