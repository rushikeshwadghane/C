#include<stdio.h>
int main()
{
int A = 11;
int *p1 = &A;
int **p2 = &p1;
int ***p3 = &p2;
int ****p4 = &p3;
int *****p5 = &p4;

printf("Value of A: %d\n",A);

printf("Value of p5:%d\n",*****p5);

printf("Address of p3:%d\n",&***p3);

printf("Value of *p4: %d\n",*p4);

printf("size of p3: %d\n", sizeof(p1));

printf("Size of ***p3: %d\n", sizeof(***p3));




return 0;
}