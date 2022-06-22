//Program to display 5 times Hello on screen
#include<stdio.h>
void Display();
int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
  
    Display(iValue);
    return 0;
}

void Display(int iNo)
{
      if(iNo<0){
        iNo= -(iNo);
    }
     int iCnt=0;
    for(iCnt=0;iCnt<iNo ;iCnt++){
        printf("Hello \n");
    }

}