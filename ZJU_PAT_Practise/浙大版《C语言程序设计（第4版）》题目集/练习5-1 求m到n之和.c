//
//  main.c
//  PAT
//
//  Created by Vision on 2022/3/15.
//

#include <stdio.h>

int sum(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int sum(int m, int n){
    int result=0;
    for (int i=m; i<=n; i++) {
        result = result + i;
    }
    return result;
}
