//
//  实验7-3-1 字符串逆序.c
//  PAT
//
//  Created by Vision on 2022/3/25.
//

#include<stdio.h>
#define MANX 80

int main(void)
{
    char line[MANX];
    int k=0;
    while ((line[k]=getchar())!='\n') {
        k++;
    }
    k--;
    while (k>=0) {
        putchar(line[k]);
        k--;
    }
    
    return 0;
}
