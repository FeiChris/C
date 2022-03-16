#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    double t,result=0;
    scanf("%d",&n);
    for (int i = 1; i<=n; i++) {
        t = pow(2, i);
        result = result + t;
    }
    printf("result = %.0lf\n",result);
    return 0;
}