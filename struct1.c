#include<stdio.h>
struct Addition
{
    int a;
    int b;
};
int main()
{
    struct Addition obj = {10,11};
    int no1,no2=0;
    int add1,add2=0;
    printf("Value of a,b : %d,%d\n",obj.a,obj.b);
    printf("Enter Value of no1 and no2:\n");
    scanf("%d %d",&no1,&no2);
    add1= no1 + obj.a;
    add2 = no2 + obj.b;


    printf("Addition of element:\n%d\n%d\n",add1,add2);

    return 0;
}


