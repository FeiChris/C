//
//  习题10-3 递归实现指数函数.c
//  PAT
//
//  Created by Vision on 2022/4/12.
//

#include <stdio.h>

double calc_pow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
double calc_pow( double x, int n ){
    double result = 1.0;
    if(n==1){
        result = x;
    }else{
        result = x * calc_pow(x, n-1);
    }
    return result;
}

