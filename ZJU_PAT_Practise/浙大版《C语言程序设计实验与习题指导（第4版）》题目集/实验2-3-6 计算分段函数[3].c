#include<stdio.h>
int main(void)
{
    double x, result;
    
    scanf("%lf", &x);
    if(x == 10)
        result = 0.1;
    else
        result = x;
    printf("f(%.1lf) = %.1lf", x, result);
    
    return 0;
}