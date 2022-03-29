//
//  习题8-5 使用函数实现字符串部分复制.c
//  PAT
//
//  Created by Vision on 2022/3/29.
//

#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy( char *t, int m, char *s )
{
    t = t + m - 1;
    while(*t!='\0'){
        *s = *t;
        t++;
        s++;
    }
    *s = '\0';
}
