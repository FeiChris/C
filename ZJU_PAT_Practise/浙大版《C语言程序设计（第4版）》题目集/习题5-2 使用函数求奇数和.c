//
//  习题5-2 使用函数求奇数和.c
//  PAT
//
//  Created by Vision on 2022/3/17.
//

#include <stdio.h>

#define MAXN 10

int even( int n );
int OddSum( int List[], int N );

int main()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for ( i=0; i<N; i++ ) {
        scanf("%d", &List[i]);
        if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int even( int n ){
    int result;
    if (n%2==0) {
        result = 1;
    }else{
        result = 0;
    }
    return  result;
}

int OddSum( int List[], int N ){
    int result=0;
    for (int i=0; i<N; i++) {
        if (List[i]%2==1||List[i]%2==-1) {
            result = result + List[i];
        }
    }
    return result;
}
