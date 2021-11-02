/*
一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。
设重力加速度为10米/秒 2。

输入格式:
本题目没有输入。

输出格式:
按照下列格式输出

height = 垂直距离值

结果保留2位小数。
*/
#include<stdio.h>
int main(void)
{
	float height=0;
	height = (10*3*3)/2;
	printf("%.2f\n",height);
}