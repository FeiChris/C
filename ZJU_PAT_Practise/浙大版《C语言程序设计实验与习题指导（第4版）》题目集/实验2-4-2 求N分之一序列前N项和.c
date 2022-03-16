#include<stdio.h>
int main(void)
{
    int N, i;
    double sum;
    
    sum = 0;
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        sum = sum + 1.0 / i;
    }
    printf("sum = %.6lf\n",sum);
    return 0;
}