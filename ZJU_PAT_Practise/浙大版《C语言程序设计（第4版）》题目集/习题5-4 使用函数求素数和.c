//
//  习题5-4 使用函数求素数和.c
//  PAT
//
//  Created by Vision on 2022/3/17.
//

#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );
    
int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime( int p ){
    int result=0;
    
    if (p<=1) {
        result=0;
    }else if(p==2){
        result = 1;
    }else{
        result = 1;
        for (int i=2; i<=sqrt(p)+1; i++) {
            if (p%i==0) {
                result = 0;
                break;
            }
        }
    }
    return result;
}
int PrimeSum( int m, int n ){
    int result=0;
    int flag=0;
    for (int j=m; j<=n; j++) {
        if (j<=1) {
            flag=0;
        }else if(j==2){
            flag = 1;
        }else{
            flag = 1;
            for (int i=2; i<=sqrt(j)+1; i++) {
                if (j%i==0) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1) {
            result = result + j;
        }
    }
    return result;
}

