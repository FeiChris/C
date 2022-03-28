//
//  实验8-2-2 找最长的字符串.c
//  PAT
//
//  Created by Vision on 2022/3/28.
//

#include<stdio.h>
#include<string.h>
#define max 80
int main(void)
{
    int n,longest,c;
    char a[max],b[max];
    scanf("%d",&n);
    scanf("%s",a);
    longest = (int)strlen(a);
    for (int i=1; i<n; i++) {
        scanf("%s",b);
        c = (int)strlen(b);
        if (c > longest) {
            longest = c;
            strcpy(a, b);
        }
    }
    printf("The longest is: %s\n",a);
}
