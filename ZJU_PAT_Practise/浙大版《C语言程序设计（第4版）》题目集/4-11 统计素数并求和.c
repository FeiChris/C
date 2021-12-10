/*
本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式:
输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

输出格式:
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

输入样例:
10 31
结尾无空行
输出样例:
7 143
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int M, N, i, j;
    int count = 0, sum = 0, limit, flag;
    
    scanf("%d %d", &M, &N);
    if(M < 1 || N > 500 || M > N);
    else {
        for(i = M; i <= N; i++){
            if(i <= 1){
                flag = 0;
            }else if(i ==2 ){
                flag = 1;
            }else{
                flag = 1;
                limit = sqrt(i) + 1;
                for(j = 2; j <= limit; j++){
                if(i % j == 0){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1){
                count++;
                sum = sum + i;
            }
        }
    }
    printf("%d %d", count, sum);
    
    return 0;
}