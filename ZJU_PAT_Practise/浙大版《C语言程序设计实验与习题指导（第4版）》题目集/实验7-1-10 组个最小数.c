//
//  实验7-1-10 组个最小数.c
//  PAT
//
//  Created by Vision on 2022/3/22.
//

#include<stdio.h>
#define MANX 10

int main(void)
{
    int a[MANX];
    int b[50];
    int num;
    int result=0;
    for (int i=0; i<MANX; i++) {
        scanf("%d",&a[i]);
    }
    
    //统计输入的个数
    num = a[0];
    for (int i = 1; i<MANX; i++) {
        num = num + a[i];
    }
    
    for (int i = 1; i<MANX; i++) {
        if (a[i]!=0) {
            b[result] = i;
            a[i]--;
            break;
        }
    }
    
    for (int i = 0; i < MANX; i++) {
        if (a[i]!=0) {
            result++;
            b[result]=i;
            a[i]--;
            i--;
        }
    }
    
    for (int i=0; i<num; i++) {
        printf("%d",b[i]);
    }
    

    return 0;
}
