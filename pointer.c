#include<stdio.h>
int main()
{
 int iValue = 21;
    int *iptr = NULL;
     iptr = &iValue;

     printf("Value of no: %d\n", iValue);         //21

     printf("Adress of ivalue:%d\n",&iValue);    //2000

     printf("Size of poitner: %d\n", sizeof(iptr));  //8

     printf("Value of derefrencing iptr:%d\n",*iptr); //21

     printf("Value of iptr :%d\n",iptr);    //2000

     printf("Address of pointer :%d\n",&iptr);  // 2004

     printf("Size of *iptr : %d\n", sizeof(*iptr));


     return 0;

}    