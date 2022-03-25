//
//  实验7-3-9 删除重复字符.c
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
    char ch;
    while ((c[n]=getchar())!='\n') {
        n++;
    }
    c[n] = '\0';
    
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            if (c[j]==c[i]) {
                for (int k = j; k<n-1; k++) {
                    c[k] = c[k+1];
                }
                j--;
                n--;
            }
        }
        
    }
    
    for (int i = 0; i<n; i++) {
        ch = c[i];
        for (int j = i+1; j<n; j++) {
            if (c[j]<c[i]) {
                ch = c[j];
                c[j] = c[i];
                c[i] = ch;
            }
        }
        
        printf("%c",ch);
    }
    printf("\n");
    
    
    return 0;
}
