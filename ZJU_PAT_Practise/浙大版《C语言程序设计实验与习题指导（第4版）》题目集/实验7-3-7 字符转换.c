//
//  实验7-3-7 字符转换.c
//  PAT
//
//  Created by Vision on 2022/3/25.
//

#include<stdio.h>
#define Max 80

int main(void)
{
    long result = 0;
    
    char c[Max];
    int n=0;
    
    while ((c[n]=getchar())!='\n') {
        n++;
    }
    c[n] = '\0';
    
    for (int i = 0; i<n; i++) {
        if (c[i]>='0' && c[i]<='9') {
            result = result * 10 + c[i] - '0';
        }
    }
    printf("%ld\n",result);
    
    return 0;
}
