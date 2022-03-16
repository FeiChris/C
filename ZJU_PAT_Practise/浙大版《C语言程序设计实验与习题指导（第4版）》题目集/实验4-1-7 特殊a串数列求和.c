#include <stdio.h>
#include <math.h>
int main(void) {
    int n,a,t,s=0;
    scanf("%d %d",&a,&n);
    t = a;
    for (int i = 0; i<n; i++) {
        if (i>0) {
            t = t + a * pow(10,i);
        }

        s = s + t;
    }
    printf("s = %d\n",s);
    return 0;
}