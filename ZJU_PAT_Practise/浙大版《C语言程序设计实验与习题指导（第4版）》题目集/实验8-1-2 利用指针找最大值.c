//
//  实验8-1-2 利用指针找最大值.c
//  PAT
//
//  Created by Vision on 2022/3/27.
//

#include <stdio.h>

void findmax( int *px, int *py, int *pmax );

int main()
{
    int max, x, y;

    scanf("%d %d", &x, &y);
    findmax( &x, &y, &max );
    printf("%d\n", max);

    return 0;
}

/* 你的代码将被嵌在这里 */
void findmax( int *px, int *py, int *pmax ){
    if (*px>=*py) {
        *pmax = *px;
    }else
        *pmax = *py;
}

