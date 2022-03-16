#include <stdio.h>

int main(void) {
    int n;
    int min,t;
    scanf("%d",&n);
    scanf("%d",&min);
    n--;
    while (n--) {
        scanf("%d",&t);
        if (min > t) {
            min = min + t;
            t = min - t;
            min = min - t;
        }

    }
    printf("min = %d\n",min);
    return 0;
}