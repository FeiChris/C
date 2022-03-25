//
//  实验7-3-5 凯撒密码.c
//  PAT
//
//  Created by Vision on 2022/3/25.
//

#include<stdio.h>
#define Max 80
#define M 26
int main(void)
{
    char str[Max];
    int office;
    int n=0,flag = 0;
    while ((str[n]=getchar())!='\n') {
        n++;
    }
    str[n] = '\0';
    
    scanf("%d", &office);
    
    if (office<0) {
        office = -office;
        flag = 1;
    }
    if (office >= M) {
        office = office % M;
    }
    if (flag == 1) {
        office = -office;
    }
    for (int i = 0; str[i]!='\0'; i++) {
        if (office>=0) {
            if (str[i]>='A' && str[i]<='Z') {
                if ((str[i] - 'A' + office) < M) {
                    str[i] = str[i] + office;
                }else {
                    str[i] = str[i] + office - M;
                }
            }else if (str[i]>='a' && str[i]<='z'){
                if ((str[i] - 'a' + office) < M) {
                    str[i] = str[i] + office;
                }else {
                    str[i] = str[i] + office - M;
                }
            }
        }else{
            if (str[i]>='A' && str[i]<='Z') {
                if ((str[i] - 'A' + office) >0) {
                    str[i] = str[i] + office;
                }else {
                    str[i] = str[i] + office + M;
                }
            }else if (str[i]>='a' && str[i]<='z'){
                if ((str[i] - 'a' + office) > 0) {
                    str[i] = str[i] + office;
                }else {
                    str[i] = str[i] + office + M;
                }
            }
        }
        
    }
    for (int i = 0; str[i]!='\0'; i++) {
        putchar(str[i]);
        
    }
    return 0;
}
