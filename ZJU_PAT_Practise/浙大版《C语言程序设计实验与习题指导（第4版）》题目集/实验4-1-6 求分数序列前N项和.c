#include <stdio.h>

int main(void) {
    double a=2.0,b=1.0;
    double n,sum=0;
    scanf("%lf",&n);
    for (int i = 0; i < n; i++) {
        if (i>0) {
            a = a+b;
            b = a-b;
        }
        sum = sum + a/b;
    }
    printf("%.2lf\n",sum);
    return 0;
}