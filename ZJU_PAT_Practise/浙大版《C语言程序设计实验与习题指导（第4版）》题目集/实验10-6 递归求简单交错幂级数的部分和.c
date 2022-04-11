//
//  实验10-6 递归求简单交错幂级数的部分和.c
//  PAT
//
//  Created by Vision on 2022/4/11.
//

#include <stdio.h>

double fn( double x, int n );

int main()
{
    double x;
    int n;
    
    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
double fn( double x, int n ){
    double result=0;
    if (n==1) {
        result = x;
    }else{
        result = fn(x, n-1) + pow(-1,n-1) * pow(x,n);
    }
    return result;
}
