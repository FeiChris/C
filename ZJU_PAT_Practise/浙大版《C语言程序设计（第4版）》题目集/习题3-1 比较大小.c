/*
本题要求将输入的任意3个整数从小到大输出。

输入格式:
输入在一行中给出3个整数，其间以空格分隔。

输出格式:
在一行中将3个整数从小到大输出，其间以“->”相连。

输入样例:
4 2 8
结尾无空行
输出样例:
2->4->8
结尾无空行
*/
#include <stdio.h>
int main(void)
{
	int a=0,b=0,c=0;
	scanf("%d %d %d",&a,&b,&c);
	if (a > b){
		a = a + b;
		b = a - b;
		a = a - b; 
	}
	if (b > c){
		b = b + c;
		c = b - c;
		b = b - c;
	}
	if (a > b){
		a = a + b;
		b = a - b;
		a = a - b; 
	}
	printf("%d->%d->%d\n",a,b,c );
	return 0;
}