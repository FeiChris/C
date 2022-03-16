#include<stdio.h>
int main(void)
{
    int fahr = 150;
    int celsius;
    
    celsius = (fahr - 32) / 9 * 5;
    printf("fahr = 150, celsius = %d\n",celsius);
    
    return 0;
}