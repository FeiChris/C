/*
本题要求编写程序，计算序列 2/1+3/2+5/3+8/5+... 的前N项之和。注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中输出部分和的值，精确到小数点后两位。题目保证计算结果不超过双精度范围。

输入样例:
20
结尾无空行
输出样例:
32.66
*/
#include<stdio.h>
int main(void)
{
    int N,i;
    double divisor,denominator;
    double sum;
    
    scanf("%d",&N);
    sum = 2.0;
    divisor = 2.0;
    denominator = 1.0;
    
    if(N <= 0);
    else {
        if(N > 1){
            for(i = 2;i <= N;i++){
                divisor = denominator + divisor;
                denominator = divisor - denominator;
                sum = sum + divisor / denominator;
            }
        }
        printf("%.2lf",sum);
    }
    return 0;
}