#include <stdio.h>

int max(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}
int max_of_four (int a, int b, int c, int d)
{
    int max_of_a_b = 0, max_of_c_d = 0, ans = 0;

    max_of_a_b = max(a, b);
    max_of_c_d = max(c, d);
    ans = max(max_of_a_b, max_of_c_d);
    
    return ans;
}
int main()
{
    int a, b, c, d;
    int ans = 0;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
