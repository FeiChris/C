//
//  实验7-2-9 螺旋方阵.c
//  PAT
//
//  Created by Vision on 2022/3/26.
//

#include<stdio.h>
#define max 10

int main(void)
{
    int a[max][max]={0,0,0,0,0,0};
    int n;
    int digit = 1;
    scanf("%d",&n);
    for (int k = 0; k<=n/2; k++) {
        for (int i = 0+k; i<n-k ; i++) {
            a[0+k][i] = digit;
            digit++;
        }
        for (int i = 1+k; i<n-k; i++) {
            a[i][n-1-k]=digit;
            digit++;
        }
        for (int i=n-2-k; i>=0+k; i--) {
            a[n-1-k][i]=digit;
            digit++;
        }
        for (int i = n-2-k; i>0+k; i--) {
            a[i][0+k]=digit;
            digit++;
        }
        
    }
    for (int i = 0; i<n ; i++) {
        for (int j = 0; j<n; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

