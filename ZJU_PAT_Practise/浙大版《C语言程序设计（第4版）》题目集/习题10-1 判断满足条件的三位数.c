//
//  习题10-1 判断满足条件的三位数.c
//  PAT
//
//  Created by Vision on 2022/4/18.
//

#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
        
    return 0;
}


/* 你的代码将被嵌在这里 */
int search( int n ){
    int result=0;
    int a1,a2,a3;
    for (int i=11; pow(i, 2)<n; i++) {
        a1 = i*i / 100;
        a2 = i*i / 10 % 10;
        a3 = i*i % 10;
        if (a1==a2 || a2 == a3 || a1 == a3) {
            result++;
        }
    }
    return result;
}
