#include <stdio.h>
#include <math.h>
int main(void) {
    int denominator,flag;
    double eps, item, sum;
    
    flag = 1;
    denominator = 1;
    sum = 0.0;
    
    scanf("%lf",&eps);
    do{
        item = flag*1.0/denominator;
        sum = sum + item;
        flag = -flag;
        denominator = denominator + 3.0;
    }while(fabs(item)>eps);
    
    printf("sum = %.6lf\n",sum);
    return 0;
}