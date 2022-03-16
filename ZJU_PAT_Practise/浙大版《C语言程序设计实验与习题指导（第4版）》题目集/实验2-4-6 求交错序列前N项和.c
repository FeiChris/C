#include <stdio.h>

int main(void) {
    int N;
    float t,ans=0;
    scanf("%d",&N);
    for (int i = 1; i <= N; i++) {
        t = i*1.0/(2.0*i-1.0);
        if (i%2==1) {
            ans = ans + t;
        }else
            ans = ans - t;
    }
    printf("%.3f\n",ans);
    return 0;
}
