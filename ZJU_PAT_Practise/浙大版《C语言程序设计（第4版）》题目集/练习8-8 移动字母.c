//
//  练习8-8 移动字母.c
//  PAT
//
//  Created by Vision on 2022/3/29.
//

#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void Shift( char s[] ){
    char a[3];
    int c;
    c = strlen(s);
    for (int i = 0; i<3; i++) {
        a[i] = s[i];
    }
    for (int i = 0; s[i]!='\0'; i++) {
        s[i] = s[i+3];
    }
    for(int i = 0;i<3;i++){
        s[c-3+i]=a[i];
    }
}

