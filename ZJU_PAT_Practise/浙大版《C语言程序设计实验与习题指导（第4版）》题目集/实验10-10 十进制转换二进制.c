//
//  实验10-10 十进制转换二进制.c
//  PAT
//
//  Created by Vision on 2022/4/12.
//

#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    dectobin(n);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void dectobin( int n ){
    if (n<2) {
        printf("%d",n);
    }else{
        dectobin(n/2);
        printf("%d",n%2);
    }
}
