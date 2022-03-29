//
//  实验8-2-10 IP地址转换.c
//  PAT
//
//  Created by Vision on 2022/3/29.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXS 32

int main()
{
    char str[MAXS];
    int sum=0;
    for (int i=0; i<32; i++) {
        scanf("%c",&str[i]);
    }
    for (int i=0; i<4; i++) {
        sum = 0;
        for (int j=0; j<8; j++) {
            if (str[i*8+j]=='1') {
                sum = sum + pow(2, 7-j);
            }
        }
        if (i<3) {
            printf("%d.",sum);
        }else
            printf("%d",sum);
    }
    return 0;
}
