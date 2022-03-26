//
//  实验7-2-8 找鞍点.c
//  PAT
//
//  Created by Vision on 2022/3/26.
//

#include<stdio.h>
#define max 6

int main(void)
{
    int a[max][max];
    int n;
    int digit,index;
    int flag = 0;
    int fl;
    scanf("%d",&n);
    for (int i = 0; i<n ; i++) {
        for (int j = 0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 0; i<n ; i++) {
        digit = a[i][0];
        index = 0;
        for (int j = 1; j<n; j++) {
            if (digit<=a[i][j]) {
                digit = a[i][j];
                index = j;
            }
        }
        fl = 1;
        for (int k = 0; k<n; k++) {
            if (digit>a[k][index]) {
                fl = 0;
                break;
            }
        }
        if (fl) {
            flag = 1;
            printf("%d %d",i,index);
        }
    }
    
    if (flag == 0) {
        printf("NONE\n");
    }
    return 0;
}

