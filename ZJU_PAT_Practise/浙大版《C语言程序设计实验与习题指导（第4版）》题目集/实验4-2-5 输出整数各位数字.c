#include <stdio.h>
#include <math.h>
int main(void) {
    long int n,n1;
    int a,b;
    int count=0;
    scanf("%ld",&n);
    n1 = n;
    while (n1/10>0) {
        n1 = n1/10;
        count++;
    }
    for (int i = count; i >= 0; i--) {
        a = n / pow(10, i);
        b = pow(10, i);
        n = n % b;
        printf("%d ",a);
    }
    printf("\n");
    return 0;
}