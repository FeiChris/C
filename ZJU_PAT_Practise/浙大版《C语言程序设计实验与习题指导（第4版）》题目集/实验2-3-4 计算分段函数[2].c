#include<stdio.h>
#include<math.h>
int main(void)
{
    double x, result;
    
    scanf("%lf %lf",&x,&result);
    if(x < 0){
        result = pow(x + 1, 2) + 2 * x + 1 / x;
    }else{
        result = pow(x, 0.5);
    }
    printf("f(%.2lf) = %.2lf",x,result);
    
    return 0;
}