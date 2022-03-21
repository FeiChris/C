//
//  习题6-1 分类统计字符个数.c
//  PAT
//
//  Created by Vision on 2022/3/21.
//

#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */

void StringCount( char s[] ){
    char x;
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        x = s[i];
        if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')){
            letter++;
        }else if ((x+0) == 32 || (x+0) == 10){
            blank ++;
        }else if (x >= '0' && x <='9'){
            digit ++;
        }else{
            other ++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other );
}

