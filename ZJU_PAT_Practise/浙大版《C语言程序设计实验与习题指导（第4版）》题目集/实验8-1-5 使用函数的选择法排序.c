//
//  实验8-1-5 使用函数的选择法排序.c
//  PAT
//
//  Created by Vision on 2022/3/27.
//

#include <stdio.h>
#define MAXN 10

void sort( int a[], int n );

int main()
{
    int i, n;
    int a[MAXN];
    
    scanf("%d", &n);
    for( i=0; i<n; i++ )
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for( i = 0; i < n; i++ )
        printf(" %d", a[i]);
    printf("\n");
        
    return 0;
}

/* 你的代码将被嵌在这里 */
void sort( int a[], int n ){
    int digit;
    for (int i = 0; i<n-1; i++) {
        for (int j = i; j<n; j++) {
            if (a[i]>a[j]) {
                digit=a[j];
                a[j]=a[i];
                a[i]=digit;
            }
        }
    }
}
