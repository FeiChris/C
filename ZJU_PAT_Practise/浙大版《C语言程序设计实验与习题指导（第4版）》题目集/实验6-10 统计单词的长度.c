//
//  实验6-10 统计单词的长度.c
//  PAT
//
//  Created by Vision on 2022/3/20.
//

#include <stdio.h>
    
int main()
{
    char ch=' ';
    int count=0;
    int flag = 0;
    int a = 0;
    do {
        ch = getchar();
        if (ch == ' ' || ch == '\n') {
            if (flag==1) {
                printf("%d ",count);
                flag = 0;
            }
            count = 0;
            if (ch == '\n' && a == 0) {
                printf("%d ",0);
            }
        }else{
            count++;
            flag = 1;
            a = 1;
        }
        
    }while (ch != '\n');
    return 0;
}


