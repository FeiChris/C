//
//  实验8-1-4 拆分实数的整数与小数部分.c
//  PAT
//
//  Created by Vision on 2022/3/27.
//

#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;
    
    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void splitfloat( float x, int *intpart, float *fracpart ){
    *intpart = (int)x;
    *fracpart = x - *intpart;
}
