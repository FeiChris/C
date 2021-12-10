/*
已知函数e  的x次
 可以展开为幂级数。现给定一个实数x，要求利用此幂级数部分和求e 的x次
 的近似值，求和一直继续到最后一项的绝对值小于0.00001。

输入格式:
输入在一行中给出一个实数x∈[0,5]。

输出格式:
在一行中输出满足条件的幂级数部分和，保留小数点后四位。

输入样例:
1.2
结尾无空行
输出样例:
3.3201
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    double x, sum, item, denominator, divisor;
    int i;
    
    scanf("%lf",&x);
    i = 1;
    denominator = 1.0;
    sum = 1.0;
    if(x >= 0 && x <= 5.0){
        item = x;
        while(fabs(item) >= 0.00001){
            sum = sum + item;
            i++;
            divisor = pow(x,i);
            denominator = denominator * i;
            item = divisor / denominator;
        }
    }
    sum = sum + item;
    printf("%.4lf",sum);
    
    return 0;
}
