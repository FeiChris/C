//
//  实验8-2-4 使用函数实现字符串部分复制.c
//  PAT
//
//  Created by Vision on 2022/3/29.
//

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
