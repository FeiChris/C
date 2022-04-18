//
//  实验11-1-2 输出月份英文名.c
//  PAT
//
//  Created by Vision on 2022/4/18.
//

#include <stdio.h>

char *getmonth( int n );

int main()
{
    int n;
    char *s;
    
    scanf("%d", &n);
    s = getmonth(n);
    if ( s==NULL ) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *getmonth( int n ){
    char *s = NULL;
    char *a[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    if (n>0&&n<13) {
        s = a[n-1];
    }
    return s;
}

