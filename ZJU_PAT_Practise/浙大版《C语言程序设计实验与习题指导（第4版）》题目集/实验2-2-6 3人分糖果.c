#include<stdio.h>
int main(void)
{
    int a = 8,b = 9,c = 10;
    a = (a - a % 3) / 3;
    b = b + a;
    c = c + a;
    b = (b - b % 3 )/ 3;
    a = a + b;
    c = c + b;
    c = (c - c % 3) / 3;
    a = a + c;
    b = b + c;
    printf("%d %d %d\n",a,b,c);
    return 0;
}