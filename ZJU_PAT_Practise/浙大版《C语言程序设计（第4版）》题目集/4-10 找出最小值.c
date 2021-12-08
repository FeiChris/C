/*
本题要求编写程序，找出给定一系列整数中的最小值。

输入格式：
输入在一行中首先给出一个正整数n，之后是n个整数，其间以空格分隔。

输出格式：
在一行中按照“min = 最小值”的格式输出n个整数中的最小值。

输入样例：
4 -2 -123 100 0
结尾无空行
输出样例：
min = -123
*/
#include<stdio.h>
int main(void)
{
    int N, min, x, i;
    
    scanf("%d", &N);
    
    scanf("%d", &x);
    min = x;
    for(i = 1; i < N; i++){
        scanf("%d", &x);
        if(x < min)
            min = x;
    }
    printf("min = %d", min);
    
    return 0;
}