//
//  习题7-3 判断上三角矩阵.c
//  PAT
//
//  Created by Vision on 2022/3/24.
//

#include<stdio.h>
#define MANX 10

int main(void)
{
    int T;
    int n;
    int flag=0;
    int a[MANX][MANX];
    int b[10];
    scanf("%d", &T);
    for (int i = 0; i<T; i++) {
        scanf("%d", &n);
        for (int j = 0; j<n; j++) {
            for (int k = 0; k<n; k++) {
                scanf("%d", &a[j][k]);
            }
        }
        for (int j = 0; j<n; j++) {
            for (int k = 0; k<n; k++) {
                if (j>k && a[j][k]!=0) {
                    flag ++;
                    
                }
            }
        }
        if (flag==0) {
            b[i]=1;
        }else{
            b[i]=0;
        }
        flag = 0;
    }
    for (int i = 0; i<T; i++) {
        if (b[i]==1) {
            printf("YES\n");
        }else
            printf("NO\n");
    }
    return 0;
}
