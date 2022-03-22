//
//  实验7-1-11 装箱问题.c
//  PAT
//
//  Created by Vision on 2022/3/22.
//

#include<stdio.h>
#define MANX 1000

int main(void)
{
    int a[MANX];
    int c[MANX];
    int b[MANX];
    int n,max=0;
    //输入物品个数
    scanf("%d", &n);
    //输入每个物品的大小
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    
    for (int i = 1; i<=n; i++) {
        b[i] = 100;
    }
    for (int i=0; i<n; i++) {
        for (int j=1; j<=n; j++) {
            if (b[j]-a[i]>=0) {
                b[j] = b[j]-a[i];
                c[i] = j;
                if (j>max) {
                    max = j;
                }
                break;
            }
        }
    }
    for (int i = 0; i<n; i++) {
        printf("%d %d\n",a[i],c[i]);
    }
    printf("%d",max);
    return 0;
}
              
