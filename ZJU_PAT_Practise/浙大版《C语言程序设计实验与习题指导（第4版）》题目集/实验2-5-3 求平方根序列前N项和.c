#include <stdio.h>
#include <math.h>
int main(void) {
    int n;
    double sum=0,t;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        t = sqrt(i*1.0);
        sum =sum + t;
    }
    printf("sum = %.2lf\n",sum);
    return 0;
}