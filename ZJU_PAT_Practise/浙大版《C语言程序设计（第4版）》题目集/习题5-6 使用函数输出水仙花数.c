//
//  习题5-6 使用函数输出水仙花数.c
//  PAT
//
//  Created by Vision on 2022/3/17.
//

#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic( int number ){
    int result;
    int a,b,c;
    b = 0;
    a = number;
    while (number > 0) {
        c = number % 10;
        if (a<1000) {
            b = b + c * c * c;
        }else{
            b = b + c * c * c * c;
        }
        number = number / 10;
    }
    if (a == b) {
        result = 1;
    }else{
        result = 0;
    }
    return result;
}

void PrintN( int m, int n ){
    for (int i = m + 1; i<n; i++) {
        if (narcissistic(i)==1) {
            printf("%d\n",i);
        }
    }
}
