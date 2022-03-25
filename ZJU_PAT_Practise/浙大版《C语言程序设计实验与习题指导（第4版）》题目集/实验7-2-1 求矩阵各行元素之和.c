//
//  实验7-2-1 求矩阵各行元素之和.c
//  PAT
//
//  Created by Vision on 2022/3/25.
//

#include<stdio.h>
#define MANX 10

int main(void)
{
    int m,n;
    int sum = 0;
    int a[MANX][MANX];
    int b[MANX];
    
    scanf("%d %d", &m, &n);
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            sum = sum + a[i][j];
        }
        b[i] = sum;
        sum = 0;
    }
    
    for (int i = 0; i<m; i++) {
        printf("%d\n",b[i]);
    }
    return 0;
}
