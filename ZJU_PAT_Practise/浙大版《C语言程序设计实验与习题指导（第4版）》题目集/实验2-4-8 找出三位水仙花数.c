#include <stdio.h>
#include <math.h>
int main(void) {
    int M,N;
    scanf("%d %d",&M,&N);
    if (100 <= M && M <= N && N <= 999) {
        for (int i = M; i <= N; i++) {
            if (i == pow(i%10, 3) + pow(i/10%10, 3) + pow(i/100, 3)) {
                printf("%d\n",i);
            }
        }
    }else
        printf("Invalid Value.\n");
    return 0;
}
