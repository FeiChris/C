//
//  习题6-4 使用函数输出指定范围内的Fibonacci数.c
//  PAT
//
//  Created by Vision on 2022/3/20.
//

#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);

    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib( int n ){
    int t,t1,t2;
    t1=t2=0;
    t=1;
    for (int i=1; i<n; i++) {
        t1 = t2;
        t2 = t;
        t = t2 + t1;
    }
    return t;
}

void PrintFN( int m, int n ){
    int flag,x=0,a = 1,b = 1;
    flag = 1;
    for (int i=1; x<m; i++) {
        x = fib(i);
        a = i;
    }
    for (int i=1; x<n; i++) {
        x = fib(i);
        b = i;
    }
    for (int i=m; i<=n; i++) {
        for (int j = a; j<=b; j++) {
            if (i == fib(j)) {
                if (flag==1) {
                    printf("%d",i);
                }else{
                    printf(" %d",i);
                }
                flag = 0;
                if (a==1&&b==1) {
                    printf(" %d",i);
                }
            }
        }
    }
    if (flag==1) {
        printf("No Fibonacci number");
    }
}
