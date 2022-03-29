//
//  习题8-3 数组循环右移.c
//  PAT
//
//  Created by Vision on 2022/3/29.
//

#include <stdio.h>
#define MAXN 10

void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    
    ArrayShift(a, n, m);
    
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void ArrayShift( int a[], int n, int m ){
    int digit;
    for (int i = 0; i<m; i++) {
        digit = a[n-1];
        for (int j = n-1; j>0; j--) {
            a[j] = a[j-1];
        }
        a[0]=digit;
    }
}
