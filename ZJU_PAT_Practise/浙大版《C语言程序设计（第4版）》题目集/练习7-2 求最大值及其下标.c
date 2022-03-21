//
//  练习7-2 求最大值及其下标.c
//  PAT
//
//  Created by Vision on 2022/3/21.
//

#include <stdio.h>
#define MAXN 10
    
int main()
{
    int i, index, n;
    int a[MAXN];
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    //找最大值
    index = 0;
    for (i = 1; i < n; i++) {
        if (a[i] > a[index]) {
            index = i;
        }
    }
    //输出最大值和最大值下标
    printf("%d %d", a[index], index);
    return 0;
}
