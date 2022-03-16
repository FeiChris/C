#include <stdio.h>

double fact( int n );

int main(void)
{    
    int m, n;
    double result; 

    scanf("%d%d", &m, &n);
    if(m > 0 && n > 0 && m <= n){
        result = fact(n)/fact(n-m);
        printf("result = %.0f\n", result);    
    }

    return 0;
}

/* 请在这里填写答案 */
double fact(int x){
    double re_n = 1.0;
    for (int i=1; i<=x; i++) {
        re_n = i * re_n;
    }
    return re_n;
}
