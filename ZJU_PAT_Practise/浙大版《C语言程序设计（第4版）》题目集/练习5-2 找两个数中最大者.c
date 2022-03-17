//
//  练习5-2 找两个数中最大者.c
//  PAT
//
//  Created by Vision on 2022/3/17.
//

#include <stdio.h>

int max( int a, int b );

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("max = %d\n", max(a, b));
    
    return 0;
}

/* 你的代码将被嵌在这里 */

int max( int a, int b ){
    int result;
    if (a>=b) {
        result = a;
    }else
        result = b;
    return result;
}
