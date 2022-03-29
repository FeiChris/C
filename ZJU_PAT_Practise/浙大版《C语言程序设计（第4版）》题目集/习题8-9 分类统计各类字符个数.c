//
//  习题8-9 分类统计各类字符个数.c
//  PAT
//
//  Created by Vision on 2022/3/29.
//

#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount( char *s ){
    int letter_d,letter_x,blank,digit,other;
    letter_d = 0;
    letter_x= 0;
    blank = 0;
    digit = 0;
    other = 0;
    for (int i=0; s[i]!='\0'; i++) {
        if (s[i]>=65 && s[i]<=90) {
            letter_d++;
        }else if (s[i] == 32){
            blank++;
        }else if (s[i]>='0' && s[i]<='9'){
            digit++;
        }else if(s[i]>=97 && s[i]<=122){
            letter_x++;
        }else
            other++;
    }
    printf("%d %d %d %d %d",letter_d,letter_x,blank,digit,other);
}
