//
//  实验7-2-3 求矩阵的局部极大值.c
//  PAT
//
//  Created by Vision on 2022/3/26.
//

#include<stdio.h>
#define max 20

int main(void)
{
    int a[max][max];
    int n,m;
    int flag = 0;
    scanf("%d %d",&n,&m);
    for (int i = 0; i<n ; i++) {
        for (int j = 0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 1; i<n-1 ; i++) {
        for (int j = 1; j<m-1; j++) {
            if (a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1]) {
                printf("%d %d %d\n",a[i][j],i+1,j+1);
                flag = 1;
            }
        }
    }
    if (flag == 0) {
        printf("None %d %d\n",n,m);
    }
    return 0;
}

