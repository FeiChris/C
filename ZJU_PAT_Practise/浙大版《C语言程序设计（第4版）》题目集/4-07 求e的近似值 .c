/*
自然常数 e 可以用级数 1+1/1!+1/2!+⋯+1/n!+⋯ 来近似计算。
本题要求对给定的非负整数 n，求该级数的前 n+1 项和。

输入格式:
输入第一行中给出非负整数 n（≤1000）。

输出格式:
在一行中输出部分和的值，保留小数点后八位。

输入样例:
10
结尾无空行
输出样例:
2.71828180
结尾无空行
*/
#include<stdio.h>
double func(double x);
int main(void)
{
    int n, i;
    double e = 1;
    
    scanf("%d", &n);
    if(n == 0)
        e = 1;
    else if(n >0 && n <= 1000){
        for(i = 2; i <= n + 1; i++){
            e = e + 1.0 / func(i-1);
        }
    }
    printf("%.8lf",e);
}

double func(double x)
{
    int i;
    double ans = 1;
    for(i = 1; i <= x; i++){
        ans = ans * i;
    }
    return ans;
}