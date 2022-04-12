//
//  实验10-8 递归求Fabonacci数列.c
//  PAT
//
//  Created by Vision on 2022/4/12.
//

#include <stdio.h>

int f( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    printf("%d\n", f(n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int f( int n ){
    int result;
    if (n==0) {
        result = 0;
    }else if (n==1){
        result = 1;
    }else{
        result = f(n-2) + f(n-1);
    }
    return result;
}
