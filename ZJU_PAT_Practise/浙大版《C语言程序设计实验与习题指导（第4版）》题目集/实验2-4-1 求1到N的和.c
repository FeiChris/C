#include<stdio.h>
int main(void)
{
    int N, sum, i;
    
    sum = 0;
    scanf("%d", &N);
    for(i = 0; i <= N; i++){
        sum = sum + i;
    }
    printf("sum = %d\n",sum);
    
    return 0;
}