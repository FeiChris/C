//
//  习题5-3 使用函数计算两点间的距离.c
//  PAT
//
//  Created by Vision on 2022/3/17.
//

#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 );

int main()
{
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
double dist( double x1, double y1, double x2, double y2 ){
    double result;
    result = pow(x2-x1, 2) + pow(y2-y1, 2);
    result = sqrt(result);
    return result;
}
