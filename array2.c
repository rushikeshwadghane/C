#include<stdio.h>
int main(){
    float arr[] = {10.3,43.41,45.34,234.45};
    float *p = arr;
    float *q = &arr[3];
   // p = arr;
   // p = &arr[3];

    printf("%f\n",*q);
    printf("%f\n",*p);
    printf("%f\n",*(p+2));
    printf("%f\n",*(p+1));
    printf("%f\n",p[1]);
    printf("%f\n",*(2+arr));
    printf("%f\n",0[arr]);
    printf("%f\n",q-p);
    printf("%f\n",q-2);

    return 0;
}    