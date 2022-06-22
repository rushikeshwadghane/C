#include<stdio.h>
int Add(int a,int b)
{
    int ans;
    ans = a+b;
    return ans;
}
int main()
{
    int no1=10,no2=20,ret=0;
    int (*ptr)(int,int);
    ptr = Add;
    
    printf("Address of function:%d\n",Add);
    
    ret = ptr(no1,no2);
    printf("Addition: %d\n", ret);

    return 0;
}