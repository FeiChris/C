//
//  习题8-4 报数.c
//  PAT
//
//  Created by Vision on 2022/3/29.
//

#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    CountOff( n, m, out );
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void CountOff( int n, int m, int out[] ){
    int a[MAXN]={0};
    int x=0;
    int i=0;
    int h=0;
    int y;
    for ( i=0; i<n; i++) {
        a[i]=i+1;
    }
    i=0;
    y=n;
    while (y>0) {
        if (a[i]!=0) {
            x++;
        }
        if (x==m) {
            h++;
            x = 0;
            a[i]=0;
            out[i]=h;
            y--;
        }
        i++;
        if (i>n-1) {
            i=0;
        }
    }
}
