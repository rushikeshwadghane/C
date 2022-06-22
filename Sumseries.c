#include<stdio.h>
	long long seriesSum(int n) {
	    int sum =0;
	    if(n<0)
	    {
	       return 0;
	    }
	    else{
	      long long sum =((n*(n+1))/2);
	    }
	   
	  return  sum;
	    
	}
int main()
{
        printf("ENter array element:\n");
    int num=0;
    scanf("%d",&num);
    
    int iret = seriesSum(num);
    printf("%d\n",iret);
    return 0;

}
