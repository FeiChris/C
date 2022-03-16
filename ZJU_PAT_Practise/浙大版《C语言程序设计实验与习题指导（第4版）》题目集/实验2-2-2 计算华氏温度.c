#include<stdio.h>
int main(void)
{
    int celsius = 26;
    int fahr;
    fahr = 9 * celsius / 5 + 32;
    printf("celsius = 26, fahr = %d\n",fahr);
    return 0;
}