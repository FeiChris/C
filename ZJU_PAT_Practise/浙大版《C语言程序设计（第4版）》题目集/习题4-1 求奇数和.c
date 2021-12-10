/*
本题要求计算给定的一系列正整数中奇数的和。

输入格式:
输入在一行中给出一系列正整数，其间以空格分隔。当读到零或负整数时，表示输入结束，该数字不要处理。

输出格式:
在一行中输出正整数序列中奇数的和。

输入样例:
8 7 4 3 70 5 6 101 -1
结尾无空行
输出样例:
116
*/
#include<stdio.h>
int main(void)
{
    int nub, sum = 0;
    
    do{
        scanf("%d", &nub);
        if(nub % 2 ==1)
            sum = sum + nub;
    }while(nub > 0);
    printf("%d",sum);
    
    return 0;
}