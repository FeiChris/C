#include<stdio.h>
#include<math.h>
int main(void)
{
    int N;
    
    scanf("%d", &N);
    if(N <= 999 && N >= 100){
        if(pow(N / 100, 3) + pow((N / 10) % 10, 3) + pow(N % 10, 3) == N)
            printf("Yes\n");
        else
            printf("No\n");
    }else
        printf("Invalid Value.\n");
    return 0;
}