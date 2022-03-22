//
//  实验7-1-7 查找整数.c
//  PAT
//
//  Created by Vision on 2022/3/22.
//

#include<stdio.h>

#define MANX 20

int main(void)
{
    int n,x,flag=1,flag_1=1;
    int a[MANX];
    scanf("%d %d", &n, &x);
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i<n; i++) {
        if (a[i]==x) {
            flag = 0;
            if (flag_1) {
                flag_1 = 0;
                printf("%d",i);
            }else
                printf(" %d",i);
        }
    }
    
    if (flag) {
        printf("Not Found\n");
    }
    
    return 0;
}
