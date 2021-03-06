/*
题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？

程序分析：可填在百位、十位、个位的数字分别为1、2、3、4。
					组成所有的排列以后再去不满足条件的排列。
		*	author		:	胡必烈
		*	codeTime 	:	2021/11/4		
*/
#include <stdio.h>														//编译预处理命令
int main(void)															//主函数
{
	int i, j, k;																//定义变量

	for (i = 1; i < 5; ++i){
		for (j = 1; j < 5; ++j){
			if (i != j){
				for (k = 1; k < 5; ++k){
					if (i != k && j != k){
						printf("%d,%d,%d\n",i,j,k);
					}
				}
			}	
		}
	}

	return 0;
}