//
//  实验7-3-8 输出大写英文字母.c
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
    int flag = 1;
    
    while ((c[n]=getchar())!='\n') {
        n++;
    }
    c[n] = '\0';
    
    for (int i = 0; i<n; i++) {
        if (c[i]<'A' || c[i]>'Z') {
            for (int k = i; k<n-1; k++) {
                c[k] = c[k+1];
            }
            i--;
            n--;
        }else{
            for (int j = i+1; j<n; j++) {
                if (c[j]==c[i]) {
                    for (int k = j; k<n-1; k++) {
                        c[k] = c[k+1];
                    }
                    j--;
                    n--;
                    flag = 0;
                }
            }
        }
        
    }
    if (flag==0) {
        for (int i = 0; i<n; i++) {
            printf("%c",c[i]);
        }
        printf("\n");
    }else
        printf("Not Found\n");
    
    
    return 0;
}
