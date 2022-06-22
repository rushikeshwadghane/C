#include<stdio.h>
int main()
{
    int istd = 0;
    printf("Enter your standard:");
    scanf("%d",&istd);
    switch (istd)
    {
    case 1:
        printf("Your exam at: 8");
        break;
    case 2:
        printf("Your exam at: 9");
        break;
    case 3:
        printf("Your exam at: 10");
        break;    
    case 4:
        printf("Your exam at: 11");
        break;
    case 5:
        printf("Your exam at: 12");
        break;
    default:
    printf("Invalid standard");
        break;
    }
    return 0;
}