//
//  实验7-2-6 打印杨辉三角.c
//  PAT
//
//  Created by Vision on 2022/3/25.
//

#include<stdio.h>
#define Max 10

int main(void)
{
    int n;
    int a[Max][Max]={0};
    scanf("%d",&n);
    
    for (int i=0; i<n; i++) {
        a[i][0] = 1;
    }
    for (int i = 1; i<n; i++) {
        for (int j = 1; j<=i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int k = n-1; k>i; k--) {
            printf(" ");
        }
        for (int j = 0; j<=i; j++) {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
