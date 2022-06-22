#include<stdio.h>
//////////////////////////////////////////////////////
//
// Functon name:  Addition
// Description:   Used to perform addition two number
// Input :        Integer,Integer
// Output:        Integer
// Date :         12/04/2022
// Auther:        Rushikesh Ravindra Wadghane
//
////////////////////////////////////////////////////////
int Addition(int iValue1,int iValue2){
    int ans=0;
    ans=iValue1+iValue2;
    return ans;
}
/////////////////////////////////////////////////////
// write a program to perform addition of twonumber
/////////////////////////////////////////////////////
int main()
{
    int iNo1=0,iNo2=0,iNo3=0;
    printf("Enter iNo1 and iNo2:\n");
    scanf("%d %d",&iNo1,&iNo2);

    iNo3= Addition(iNo1,iNo2);

    printf("Addition is :%d\n",iNo3);

return 0;
}