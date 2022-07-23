#include<stdio.h>
#include<stdbool.h>
bool CheckArmstrong(int No)
{
    int i=0,temp=0,power=0,digit =0,temp1=0,count=0,sum=0;
    temp = No;
    while(temp!=0)
    {
        count++;
        temp = temp/10;
    
    }
    temp1=No;
    while(temp1>0)	
    {
	    power=1;
	    digit = temp1%10;
     //   printf("%d\n",digit);
	    for(i=0;i<count;i++)
    	{
	        power = power*digit;
	    }
         
	    sum = sum+power;
           printf("%d\n",sum);

	    if(sum> No)
	    {
	        break;	
	    }
        temp1  = temp1/10;

    }
	if(sum==No)
	{
		return true;
	}
	else
	{
	   return false;
	}			
}

int main()
{
    int iValue=0;
    bool bRet;
    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet= CheckArmstrong(iValue);

    if(bRet==true)
    {
        printf("%d is a armstrong number\n",iValue);
    }
    else{
        printf("%d is not armstrong number\n",iValue);
    }

    return 0;
}
