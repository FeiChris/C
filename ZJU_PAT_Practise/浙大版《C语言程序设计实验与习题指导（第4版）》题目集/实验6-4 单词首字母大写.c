//
//  实验6-4 单词首字母大写.c
//  PAT
//
//  Created by Vision on 2022/3/19.
//

#include <stdio.h>

int main(void)
{
    char ch;
    int space;
    space = 1;
    ch = getchar();
    while (ch != '\n') {
        if (space == 1) {
            if (ch >= 97 && ch <= 122) {
                ch = ch - 32;
            }
            space = 0;
        }
        if (ch ==' ') {
            space = 1;
        }else{
            space = 0;
        }
        putchar(ch);
        ch = getchar();
    }
}
