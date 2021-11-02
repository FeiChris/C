/*
本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中输出部分和的值，结果保留三位小数。

输入样例:
5
结尾无空行
输出样例:
0.917
结尾无空行
*/
#include <stdio.h>
int main(void)
{
	int N=0;
	float Sum = 0.0;
	scanf("%d",&N);
	for (int i = 1; i <= N; ++i){
		if (i % 2 == 1){
			Sum = Sum + i/(2.0 * i -1.0);
		}else{
			Sum = Sum - i/(2.0 * i -1.0);
		} 
	}
	printf("%.3f\n",Sum );
	return 0;
}