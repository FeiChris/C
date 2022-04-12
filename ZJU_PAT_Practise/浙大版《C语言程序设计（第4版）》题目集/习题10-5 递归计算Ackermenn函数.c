//
//  习题10-5 递归计算Ackermenn函数.c
//  PAT
//
//  Created by Vision on 2022/4/12.
//

#include <stdio.h>

int Ack( int m, int n );

int main()
{
    int m, n;
    
    scanf("%d %d", &m, &n);
    printf("%d\n", Ack(m, n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int Ack( int m, int n ){
    int result = 0;
    if (m==0) {
        result = n+1;
    }else{
        if (n==0) {
            result = Ack(m-1, 1);
        }else{
            result = Ack(m-1, Ack(m, n-1));
        }
    }
    
    return result;
}
