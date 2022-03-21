//
//  习题6-2 使用函数求特殊a串数列和.c
//  PAT
//
//  Created by Vision on 2022/3/21.
//

#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
    
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));
    printf("s = %d\n", SumA(a,n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int fn( int a, int n ){
    int result;
    result = a;
    for (int i = 1; i < n; i++) {
        result = result * 10 + a;
    }
    return result;
}
int SumA( int a, int n ){
    int result,item;
    result = fn(a, n);
    item = result;
    for (int i=1; i<n; i++) {
        item = item / 10;
        result = result + item;
    }
    return result;
}
