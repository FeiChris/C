/*
本题要求编写程序，根据公式C 
n
m
​
 = 
m!(n−m)!
n!
​
 算出从n个不同元素中取出m个元素（m≤n）的组合数。

建议定义和调用函数fact(n)计算n!，其中n的类型是int，函数类型是double。

输入格式:
输入在一行中给出两个正整数m和n（m≤n），以空格分隔。

输出格式:
按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。

输入样例:
2 7
结尾无空行
输出样例:
result = 21
*/
#include<stdio.h>
double fact(int x);
int main(void)
{
	int m=0,n=0;
	double result=0;
	scanf("%d %d",&m,&n);
	result = fact(n)/(fact(m)*fact(n-m));
	printf("result = %.0lf\n",result);
	return 0;
}
double fact(int x)
{
	double X=1.0;
	for (int i = 1; i <= x; ++i)
	{
		X = X * i ;
	}
	return X;
}