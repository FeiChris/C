#include <stdio.h>

int main(void) {
    int n,m;
    int count,sum;
    count = sum = 0;
    scanf("%d %d",&m,&n);
    if (m>=1&&m<=n&&n<=500) {
        for (int i = m; i<=n; i++) {
            for (int j = 2; j<=i; j++) {
                if (j == i && j != 1) {
                    count++;
                    sum = sum+i;
                }
                if (i % j == 0 ) {
                    break;
                }
            }
        }
    }
printf("%d %d\n",count,sum);
    return 0;
}
