//
//  练习7-4 找出不是两个数组共有的元素.c
//  PAT
//
//  Created by Vision on 2022/3/21.
//

#include <stdio.h>
#define MAXN 20
    
int main()
{
    int i, n1, n2, flag;
    int flag_one=1; //第一次输出标志，为一代表第一次输出，为0代表已经有输出。
    int a[MAXN];
    int b[MAXN];
    
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    
    //删除两个数组中相同的数字
    for (i = 0; i < n1; i++) {
        for (int j = i+1; j < n1; j++) {
            if (a[i] == a[j]) {
                for (int k = j; k< n1-1; k++) {
                    a[k] = a[k+1];
                }
                j--;
                n1--;
            }
        }
    }
    for (i = 0; i < n2; i++) {
        for (int j = i+1; j < n2; j++) {
            if (b[i] == b[j]) {
                for (int k = j; k< n2-1; k++) {
                    b[k] = b[k+1];
                }
                j--;
                n2--;
            }
        }
    }
    
    //查找不同数
    for (i = 0; i<n1; i++) {
        flag = 1;
        for (int j=0; j<n2; j++) {
            if (a[i]==b[j]) {
                flag = 0;
            }
        }
        if (flag == 1) {
            if (flag_one==1) {
                printf("%d",a[i]);
                flag_one = 0;
            }else
                printf(" %d",a[i]);
        }
    }
    //输出两个数组中不同的部分，先输出第一个数组，再输出第二个数组。
    for (i = 0; i<n2; i++) {
        flag = 1;
        for (int j=0; j<n1; j++) {
            if (b[i]==a[j]) {
                flag = 0;
            }
        }
        if (flag == 1) {
            if (flag_one==1) {
                printf("%d",b[i]);
                flag_one = 0;
            }else
                printf(" %d",b[i]);
        }
    }
    return 0;
}
