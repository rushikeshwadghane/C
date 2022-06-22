#include<stdio.h>
int main()
{
    int Mark = 0;
    printf("Enter your mark:\n");
    scanf("%d",&Mark);
    printf("Your enterd marks: %d\n",Mark);
    if(Mark>=60){
        printf("First class\n");
    }
    else{
        printf("Not first class\n");
    }

    return 0;
}