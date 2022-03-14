//
//  习题4-9 打印菱形图案.c
//  pat
//
//  Created by Vision on 2022/3/15.
//

#include <stdio.h>

int main(void)
{
    int n,a;
    scanf("%d",&n);
    a=n/2;
    for (int i=0; i<=a; i++) {
        for (int j=0; j<(a-i); j++) {
            printf("  ");
        }
        for (int j=0; j<2*i+1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i=1; i<=a; i++) {
        for (int j=0; j<i; j++) {
            printf("  ");
        }
        for (int j=0; j<2*(a-i)+1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
