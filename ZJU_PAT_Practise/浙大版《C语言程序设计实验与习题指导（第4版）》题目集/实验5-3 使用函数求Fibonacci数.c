#include <stdio.h>

int fib( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", fib(n));

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