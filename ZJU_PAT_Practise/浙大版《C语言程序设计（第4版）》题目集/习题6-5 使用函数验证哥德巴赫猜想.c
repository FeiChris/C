//
//  习题6-5 使用函数验证哥德巴赫猜想.c
//  PAT
//
//  Created by Vision on 2022/3/19.
//

#include <stdio.h>
void Goldbach( int n );
    
int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime( int p ){
    int result;
    if (p == 1) {
        result = 0;
    }else if (p == 2){
        result = 1;
    }else{
        result = 1;
        for (int i = 2; i <= p / 2 + 1; i++) {
            if (p % i == 0) {
                result = 0;
                break;
            }
        }
    }
    return result;
}

void Goldbach( int n ){
    int p,q;
    for (int i = 3; i<=n/2+1; i++) {
        if (prime(i)==1) {
            p = i;
            if (prime(n-i)==1) {
                q = n - i;
                printf("%d=%d+%d",n,p,q);
                break;
            }
        }
    }
}
