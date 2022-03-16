#include<stdio.h>
int main(void)
{
    int i,N,arc=1;
    
    scanf("%d", &N);
    for(i = 1;i <= N;i++){
        arc = arc * i;
    }
    printf("%d\n",arc);
    return 0;
}