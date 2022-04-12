//
//  习题10-2 递归求阶乘和.c
//  PAT
//
//  Created by Vision on 2022/4/12.
//

#include <stdio.h>

double fact( int n );
double factsum( int n );

int main()
{
    int n;

    scanf("%d",&n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
        
    return 0;
}

/* 你的代码将被嵌在这里 */
double factsum( int n ){
    double result=0;
    for (int i=1; i<=n; i++) {
        result = result + fact(i);
    }
    return result;
}

double fact( int n ){
    double result = 1.0;
    if (n==0||n==1) {
        result = 1;
    }else
        result = n * fact(n-1);
    return result;
}
