#include<stdio.h>
int main(void)
{
    int N, i;
    double sum;
    
    sum = 0;
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        if(i % 2 == 0)
            sum = sum - 1.0 / ((i - 1.0) * 3.0 + 1.0);
        else
            sum = sum + 1.0 / ((i - 1.0) * 3.0 + 1.0);
    }
    printf("sum = %.3lf\n",sum);
    return 0;
}