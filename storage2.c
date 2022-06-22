#include<stdio.h>
void demo()
{
    auto int A=10;
    A++;
    printf("%d\n",A);
}
void hello()
{
   static int A=10;
    A++;
    printf("%d\n",A);
}
int main()
{
    demo();            //function call
    demo();



    hello();
    hello();             //function call


  return 0;  
}
