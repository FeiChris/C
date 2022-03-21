//
//  实验7-1-5 交换最小值和最大值.c
//  PAT
//
//  Created by Vision on 2022/3/21.
//

#include<stdio.h>
#define MANX 10

int main(void)
{
    int a[MANX];
    int n,temp,index,k;
    
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    
    k=0;
    index = k;
    for (int i=k+1; i<n; i++) {
        if (a[i]<a[index]) {
            index = i;
        }
    }
    temp = a[index];
    a[index] = a[k];
    a[k] = temp;
    
    
    k=n-1;
    index = k;
    for (int i=0; i<n; i++) {
        if (a[i]>a[index]) {
            index = i;
        }
    }
    temp = a[index];
    a[index] = a[k];
    a[k] = temp;
    
    for (int i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}

