//
//  实验8-1-1 使用函数找出数组中的最大值.c
//  PAT
//
//  Created by Vision on 2022/3/27.
//

#include <stdio.h>
#define MAXN 10

int FindArrayMax( int a[], int n );

int main()
{
    int i, n;
    int a[MAXN];
    
    scanf("%d", &n);
    for( i=0; i<n; i++ ){
        scanf("%d", &a[i]);
    }

    printf("%d\n", FindArrayMax(a, n));
        
    return 0;
}

/* 请在这里填写答案 */
int FindArrayMax( int a[], int n ){
    int result=a[0];
    for (int i=1; i<n; i++) {
        if (result<a[i]) {
            result = a[i];
        }
    }
    return result;
}
