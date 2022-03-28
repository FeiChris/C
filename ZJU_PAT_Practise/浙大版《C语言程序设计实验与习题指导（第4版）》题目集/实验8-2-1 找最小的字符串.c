//
//  实验8-2-1 找最小的字符串.c
//  PAT
//
//  Created by Vision on 2022/3/28.
//

#include<stdio.h>
#include<string.h>
#define max 80
int main(void)
{
    int n;
    char a[max],b[max];
    scanf("%d",&n);
    scanf("%s",a);
    strcpy(b, a);
    for (int i=1; i<n; i++) {
        scanf("%s",a);
        if (strcmp(a, b)<0) {
            strcpy(b, a);
        }
    }
    printf("Min is: %s\n",b);
}
