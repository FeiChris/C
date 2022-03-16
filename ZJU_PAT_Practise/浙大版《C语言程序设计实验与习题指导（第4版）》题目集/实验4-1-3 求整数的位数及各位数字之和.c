#include <stdio.h>

int main(void) {
    int n;
    int sum,count;
    sum = count = 0;
    scanf("%d",&n);
    while (n > 0) {
        count++;
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("%d %d\n",count,sum);
    return 0;
}
