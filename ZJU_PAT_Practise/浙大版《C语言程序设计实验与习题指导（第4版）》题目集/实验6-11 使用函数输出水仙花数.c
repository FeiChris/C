//
//  实验6-11 使用函数输出水仙花数.c
//  PAT
//
//  Created by Vision on 2022/3/20.
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
    int result=0,item,x;
    x = number;
    if (number<1000) {
        for (int i = 0; i<3; i++) {
            item = (number % 10);
            result = result + item * item * item;
            number = number / 10;
        }
    }else
        for (int i = 0; i<4; i++) {
            item = (number % 10);
            result = result + item * item * item * item;
            number = number / 10;
        }
    if (x == result) {
        return 1;
    }else
        return 0;
}

void PrintN( int m, int n ){
    for (int i = m+1; i<n; i++) {
        if (narcissistic(i)==1) {
            printf("%d\n",i);
        }
    }
}
