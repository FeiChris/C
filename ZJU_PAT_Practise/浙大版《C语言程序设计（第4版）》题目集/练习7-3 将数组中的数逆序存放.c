//
//  练习7-3 将数组中的数逆序存放.c
//  PAT
//
//  Created by Vision on 2022/3/21.
//

#include <stdio.h>
#define MAXN 10
    
int main()
{
    int i, n;
    int a[MAXN];
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    //先输出第一个值
    printf("%d", a[n-1]);
    
    for (i = n-2; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    
    return 0;
}
