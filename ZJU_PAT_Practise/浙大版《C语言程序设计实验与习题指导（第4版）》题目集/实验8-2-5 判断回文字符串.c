//
//  实验8-2-5 判断回文字符串.c
//  PAT
//
//  Created by Vision on 2022/3/28.
//

#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];
    
    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
bool palindrome( char *s ){
    int n=0,i=0;
    for (int j = 0; s[j]!='\0'; j++) {
        n++;
    }
    n--;
    while (i<n) {
        if (s[i]!=s[n]) {
            break;
        }
        i++;
        n--;
    }
    if (i>=n) {
        return true;
    }else
        return false;
}
