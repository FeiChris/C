#include <stdio.h>

int main(void) {
    long int h,n;
    double h1,high=0;
    scanf("%ld %ld",&h,&n);
    h1 = h;
    if (n == 0) {
        high = 0;
        h1 = 0;
    }else{
        for (int i = 1; i<=n; i++) {
            high = high + h1;
            if (i>1) {
                high = high + h1;
            }
            h1 = h1/2;
        }
    }
    printf("%.1lf %.1lf",high,h1);
    return 0;
}