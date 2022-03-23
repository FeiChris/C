//
//  练习7-8 方阵循环右移.c
//  PAT
//
//  Created by Vision on 2022/3/23.
//

#include<stdio.h>
#define MANX 6

int main(void)
{
    int n,m,t;
    int a[MANX][MANX];
    int b[MANX][MANX];
    scanf("%d %d", &m, &n);
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    m = m % n;
    t = n - m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            
            b[i][j]=a[i][(j+t)%n];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
