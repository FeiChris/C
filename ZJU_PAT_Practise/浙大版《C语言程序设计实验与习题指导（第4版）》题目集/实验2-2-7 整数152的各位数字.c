#include<stdio.h>
int main(void)
{
    int Num = 152;
    int a,b,c;
    a = 152 % 10;
    b = 152 / 10 % 10;
    c = 152 / 100;
    printf("152 = %d + %d*10 + %d*100",a,b,c);
    return 0;
}