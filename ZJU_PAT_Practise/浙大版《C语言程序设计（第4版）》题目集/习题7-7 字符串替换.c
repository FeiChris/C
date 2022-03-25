//
//  习题7-7 字符串替换.c
//  PAT
//
//  Created by Vision on 2022/3/25.
//

#include<stdio.h>
#define Max 80

int main(void)
{
    char c[Max];
    int n=0;
    
    while ((c[n] = getchar())!= '\n') {
        n++;
    }
    c[n]='\0';
    
    for (int i = 0; i<n; i++) {
        if (c[i]>='A'&&c[i]<='Z') {
            c[i] = 155 - c[i];
        }
    }
    
    for (int i = 0; i<n; i++) {
        printf("%c",c[i]);
    }
    
    return 0;
}
