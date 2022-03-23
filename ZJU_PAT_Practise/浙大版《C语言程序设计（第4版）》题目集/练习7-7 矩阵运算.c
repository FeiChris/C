//
//  练习7-7 矩阵运算.c
//  PAT
//
//  Created by Vision on 2022/3/23.
//

#include<stdio.h>
#define MANX 10

int main(void)
{
    int n,result=0;
    int a[MANX][MANX];
    
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i+j!=n-1 && i!=n-1 && j!= n-1) {
                result = result + a[i][j];
            }
        }
    }
    
    printf("%d",result);
    
    return 0;
}

