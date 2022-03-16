#include <stdio.h>

int main(void) {
    int m,n;
    double t,sum=0;
    scanf("%d %d",&m,&n);
    for (int i = m; i <= n; i++) {
        t = i*i*1.0 + 1.0/i;
        sum = sum + t;
    }
    printf("sum = %.6lf\n",sum);
    return 0;
}