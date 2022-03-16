#include <stdio.h>
#include <math.h>

double fact(int n);

int main(void) {
    int n;
    double t,result=0;
    scanf("%d",&n);
    for (int i = 1; i<=n; i++) {
        t = fact(i);
        result = result + t;
    }
    printf("%.0lf\n",result);
    return 0;
}
double fact(int n){
    double ren = 1;
    for (int i = 1; i<=n; i++) {
        ren = ren * i * 1.0;
    }
    return ren;
}