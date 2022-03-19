//
//  实验6-2 英文字母替换加密（大小写转换+后移1位.c
//  PAT
//
//  Created by Vision on 2022/3/19.
//

#include <stdio.h>

int main(void)
{
    char ch;
    int flag=1;
    while (flag) {
        scanf("%c",&ch);
        if (ch == '\n')
            flag = 0;
        if ((ch>=65 && ch<=90) || (ch >=97 && ch <=122)) {
            ch = ch + 1;
            if (ch == 91 || ch == 123) {
                ch = ch - 26;
            }
            if (ch>=65 && ch<=90) {
                ch = ch + 32;
            }else if (ch>=97 && ch<=122) {
                ch = ch - 32;
            }
        }
        printf("%c",ch);
    }
  
    return 0;
}
