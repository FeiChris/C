/*本题要求实现一个打印非负整数阶乘的函数。

函数接口定义：
void Print_Factorial ( const int N );
其中N是用户传入的参数，其值不超过1000。如果N是非负整数，则该函数必须在一行中打印出N!的值，否则打印“Invalid input”。

裁判测试程序样例：*/
#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
void Print_Factorial( const int N )
{
    int i=0,Number=0;
    unsigned long long Factorial=1;
    if (N>=0){
    	Number = (int)N;
    	if (Number == N){
    		for (int i = N; i>0; --i){
    			Factorial=i*Factorial;
    		}
    		printf("%llu\n",Factorial);
    	}else{
    		printf("Invalid input\n");
    	}
    }else{
    	printf("Invalid input\n");
    }
}


/* 你的代码将被嵌在这里 */

/*输入样例：
15
结尾无空行
输出样例：
1307674368000
结尾无空行  */

