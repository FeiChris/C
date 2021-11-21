/*
给定平面上任意三个点的坐标(x1,y1)、(x2,y2)、(x3,y3)，检验它们能否构成三角形。

输入格式:
输入在一行中顺序给出六个[−100,100]范围内的数字，即三个点的坐标x1、y1、x2、y2、x3、y3。

输出格式:
若这3个点不能构成三角形，则在一行中输出“Impossible”；若可以，
则在一行中输出该三角形的周长和面积，格式为“L = 周长, A = 面积”，输出到小数点后2位。

输入样例1:
4 5 6 9 7 8
结尾无空行
输出样例1:
L = 10.13, A = 3.00
结尾无空行
输入样例2:
4 6 8 12 12 18
输出样例2:
Impossible
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	float x1,y1,x2,y2,x3,y3;
	float a,b,c,L,A,p;
	scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
	a = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	b = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
	c = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	L = a + b + c;
    p = L / 2;
	if (a + b > c && a + c > b && b + c > a){
		A = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("L = %.2f, A = %.2f\n",L,A);
	}else{
		printf("Impossible\n");
	}
	return 0;
}