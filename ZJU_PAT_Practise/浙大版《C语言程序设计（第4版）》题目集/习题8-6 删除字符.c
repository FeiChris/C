//
//  习题8-6 删除字符.c
//  PAT
//
//  Created by Vision on 2022/3/29.
//

#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void delchar( char *str, char c ){
    for (int i = 0; str[i]!='\0'; i++) {
        if (str[i]==c) {
            for (int j=i; str[j]!='\0'; j++) {
                str[j] = str[j+1];
            }
            i--;
        }
    }
}
