//
//  习题7-2 求一批整数中出现最多的个位数字.c
//  PAT
//
//  Created by Vision on 2022/3/23.
//

#include<stdio.h>
#define MANX 10

int a[MANX];

void func(int n);
void func_p(void);

int main(void)
{
    int b[1000];
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d",&b[i]);
    }
    
    for (int i=0; i<n; i++) {
        func(b[i]);
    }
    
    func_p();

    return 0;
}

void func(int n){
    int num;
    if (n==0) {
        a[0]++;
    }else{
        while (n>0) {
            num = n % 10;
            a[num]++;
            n = n / 10;
        }
    }
}

void func_p(void){
    int index=0;
    for (int i=1; i<MANX; i++) {
        if (a[index]<a[i]) {
            index = i;
        }
    }
    printf("%d:",a[index]);
    for (int i = 0; i<MANX; i++) {
        if (a[i]==a[index]) {
            printf(" %d",i);
        }
    }
}
