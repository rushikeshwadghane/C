#include<stdio.h>
#pragma pack(1)
struct demo
{
    int i;
    char ch;
    char c;
    float f;
    int a;
    double d;
  
};

int main()  
{
    struct demo obj;
    obj.i=11;
    obj.a=21;

    printf("value inside stucture: %d\n",obj.i);
    
    printf("value inside stucture: %d\n",obj.a);

    printf("Size of structure:%d\n",sizeof(struct demo));

    float avg=(float) ((250/500)*100);

    printf("%6.2f",avg);


    return 0;
}