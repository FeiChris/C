#include<stdio.h>
int main(void)
{
    float Num,result;
    
    scanf("%f", &Num);
    if(Num == 0.0)
        result = 0.0;
    else
        result = 1.0 / Num;
    printf("f(%.1f) = %.1f",Num,result);
    
    return 0;
}