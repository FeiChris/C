//
//  实验11-1-3 查找星期.c
//  PAT
//
//  Created by Vision on 2022/4/18.
//

#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];
    
    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int getindex( char *s ){
    int result=-1;
    char *a[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for (int i=0; i<7; i++) {
        if (strcmp(a[i], s)==0) {
            result = i;
        }
    }
    return result;
}
