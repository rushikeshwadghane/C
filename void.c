#include<stdio.h>
void fun();
void gun();
int main()
{
    printf("Inside main");
    fun();
    gun();
    return 0;

}
void gun()
{
    printf("Inside gun");
}
void fun()
{
    printf("Inside fun");