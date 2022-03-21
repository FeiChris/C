//
//  实验7-1-4 选择法排序.c
//  PAT
//
//  Created by Vision on 2022/3/21.
//

#include<stdio.h>
#define MANX 10

int main(void)
{
    int a[MANX];
    int n,temp,index;
    
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    
    for (int k = 0; k < n-1; k++) {
        index = k;
        for (int i=k+1; i<n; i++) {
            if (a[i]>a[index]) {
                index = i;
            }
        }
        temp = a[index];
        a[index] = a[k];
        a[k] = temp;
    }
    
    for (int i=0; i<n; i++) {
        if (i==0) {
            printf("%d",a[i]);
        }else
            printf(" %d",a[i]);
    }
    
    
    return 0;
}
