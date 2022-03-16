#include <stdio.h>
//#include <math.h>
double fact(int x);
int main(void) {
    int n,m;
    double result=0;
    scanf("%d %d",&m,&n);
    result = fact(n)/fact(m)/fact(n-m);
    printf("result = %.0lf\n",result);
    return 0;
}
double fact(int x){
    double re_n = 1.0;
    for (int i=1; i<=x; i++) {
        re_n = i * re_n;
    }
    return re_n;
}
