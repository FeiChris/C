/*
本题要求实现一个函数，判断任一给定整数N是否满足条件：它是完全平方数，又至少有两位数字相同，如144、676等。

函数接口定义：
int IsTheNumber ( const int N );
其中N是用户传入的参数。如果N满足条件，则该函数必须返回1，否则返回0。

裁判测试程序样例：
*/
#include <stdio.h>
int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}
/*
输入样例：
105 500
结尾无空行
输出样例：
cnt = 6
结尾无空行
*/
int IsTheNumber ( const int N )
{
    int i=0,j=0,k=0,a=0,b=0;
    for(i=0;i<=N;i++){
        if(i*i==N){
        	for (j = 1; N/j>0;j=j*10){
        		a=(N/j)%10; 
        		for (k = j*10; N/k>0;k= k*10){
        			b=(N/k)%10;
        			if(a == b){
        				return 1;
            			break;
        			}      		
        		}
        	}                        
        }
    }
    return 0;
}
