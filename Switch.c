#include<stdio.h>
void JwelersPortal(int iWeight)
{
    switch(iWeight)
    {
        case 1:
            printf("Your bill amount is 4000\n");
            break;
        case 2:
            printf("Your bill amount is 8000\n");
            break;
        case 5:
            printf("Your bill amount is 20,000\n");
            break;
        case 10:
            printf("Your bill amount is 40,000\n");
            break;
        default:
            printf("Invalid Wieght\n");       
    }
}
int main()
{
    int iValue=0;
    printf("Enter Gold coin size that you want to purchase: ");
    scanf("%d",&iValue);

    JwelersPortal(iValue);
    return 0;
}