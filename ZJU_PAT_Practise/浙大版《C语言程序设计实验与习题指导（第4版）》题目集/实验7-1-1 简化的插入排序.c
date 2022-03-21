//
//  实验7-1-1 简化的插入排序.c
//  PAT
//
//  Created by Vision on 2022/3/21.
//

#include <stdio.h>
#define MAXN 10
    
int main()
{
    int n;
    int x;
    int a[MAXN];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &x);
    
    for (int i = 0; i < n + 1; i++) {
        if (a[i]>=x) {
            for (int j = n; j>i; j--) {
                a[j] = a[j-1];
            }
            a[i] = x;
            break;
        }
    }
    for (int i=0; i<n+1; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}

