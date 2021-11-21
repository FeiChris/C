/*
本题要求编写程序读入N个学生的百分制成绩，统计五分制成绩的分布。
百分制成绩到五分制成绩的转换规则：

大于等于90分为A；
小于90且大于等于80为B；
小于80且大于等于70为C；
小于70且大于等于60为D；
小于60为E。
输入格式:
输入在第一行中给出一个正整数N（≤1000），即学生人数；
第二行中给出N个学生的百分制成绩，其间以空格分隔。

输出格式:
在一行中输出A、B、C、D、E对应的五分制成绩的人数分布，数字间以空格分隔，行末不得有多余空格。

输入样例:
7
77 54 92 73 60 65 69
结尾无空行
输出样例:
1 0 2 3 1
*/
#include <stdio.h>
int main(void)
{
	int N,Arc,i;
	int people[5] = {0};

	scanf("%d",&N);
 	
 	for (i = 0; i < N; ++i){
 		scanf("%d",&Arc);
 		switch(Arc/10){
            case 10:
 			case 9: 	people[0]++;		break;
 			case 8: 	people[1]++; 		break;
 			case 7: 	people[2]++; 		break;
 			case 6: 	people[3]++; 		break;
 			default: people[4]++;		break;
 		}
 	}
    printf("%d", people[0]);
 	for (i = 1; i < 5; ++i){
 		printf(" %d", people[i]);
 	}
	return 0;
}