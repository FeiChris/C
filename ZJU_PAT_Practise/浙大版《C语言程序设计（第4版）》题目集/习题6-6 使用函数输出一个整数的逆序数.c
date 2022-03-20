//
//  习题6-6 使用函数输出一个整数的逆序数.c
//  PAT
//
//  Created by Vision on 2022/3/20.
//

#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int reverse( int number ){
    int result=1,item;
    result = number % 10;
    number = number / 10;
    
    while (number) {
        item = number % 10;
        number = number / 10;
        result = result * 10 + item;
    }
    
    return result;
}
