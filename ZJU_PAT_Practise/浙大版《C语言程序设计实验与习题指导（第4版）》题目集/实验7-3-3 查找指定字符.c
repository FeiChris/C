//
//  实验7-3-3 查找指定字符.c
//  PAT
//
//  Created by Vision on 2022/3/25.
//

#include<stdio.h>
#define MANX 80

int main(void)
{
    char line[MANX];
    int k = 0;
    int i = 0;
    int index=0;
    int flag = 1;
    
    char ch,c;
    ch = getchar();
    c = getchar();
    while ((line[k]=getchar())!='\n') {
        k++;
    }
    line[k] = '\0';
    
    while (i<k) {
        if (ch == line[i]) {
            index = i;
            flag = 0;
        }
        i++;
    }
    
    if (flag==1) {
        printf("Not Found\n");
    }else
        printf("index = %d",index);
    
    return 0;
}
