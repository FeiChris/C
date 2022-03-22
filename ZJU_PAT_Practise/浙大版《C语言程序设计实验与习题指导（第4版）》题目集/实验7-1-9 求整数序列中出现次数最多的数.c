//
//  实验7-1-9 求整数序列中出现次数最多的数.c
//  PAT
//
//  Created by Vision on 2022/3/22.
//

#include<stdio.h>

#define MANX 1000

int main(void)
{
    int n,digit=1,index=0,max=0;
    int a[MANX];
    
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            if (a[i]==a[j]) {
                digit++;
                for (int k=j; k<n-1; k++) {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
        if (digit>index) {
            index = digit;
            max = i;
        }
        digit = 1;
    }
    printf("%d %d",a[max],index);
    
    return 0;
}

