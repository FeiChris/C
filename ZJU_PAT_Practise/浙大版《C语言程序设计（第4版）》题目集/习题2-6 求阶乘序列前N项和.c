/*
本题要求编写程序，计算序列 1!+2!+3!+⋯ 的前N项之和。

输入格式:
输入在一行中给出一个不超过12的正整数N。

输出格式:
在一行中输出整数结果。

输入样例:
5
结尾无空行
输出样例:
153
结尾无空行
*/
#include <stdio.h>
int Factorial(int x);
int main(void)
{
	int N=0;
	unsigned int Sum=0;
	scanf("%d",&N);
	for (int i = 1; i <= N; ++i)
	{
		Sum = Sum +	Factorial(i);
	}
	printf("%u\n",Sum );
	return 0;
}
int Factorial(int x)
{
	int X = 1;
	for (int i = 1; i <= x; ++i)
	 {
	 	X = X * i;
	 } 
	 return X;
}