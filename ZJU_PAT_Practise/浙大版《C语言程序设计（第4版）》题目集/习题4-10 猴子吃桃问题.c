//
//  习题4-10 猴子吃桃问题.c
//  pat
//
//  Created by Vision on 2022/3/15.
//

#include <stdio.h>

int main(void)
{
    int n,d=1;
    scanf("%d",&n);
    for (int i=1; i<n; i++) {
        d = (d+1)*2;
    }
    
    printf("%d\n",d);
    return 0;
}
