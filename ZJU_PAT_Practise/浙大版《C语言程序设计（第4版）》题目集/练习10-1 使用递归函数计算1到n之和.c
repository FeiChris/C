//
//  练习10-1 使用递归函数计算1到n之和.c
//  PAT
//
//  Created by Vision on 2022/4/12.
//

#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int sum( int n ){
    int result;
    if (n<1) {
        result = 0;
    }else if (n==1) {
        result = 1;
    }else
        result = n + sum(n-1);
    return result;
}
