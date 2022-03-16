#include <stdio.h>
#include <math.h>

int sushu(int x);
int main(void) {
    int n,t1,t2;
    
    scanf("%d",&n);
    
    for (int i=2; i<=n; i++) {
        if (i==2 || i%2 == 1) {
            t1 = sushu(i);
            if (t1==1) {
                t2 = sushu(n - i);
                if (t2==1) {
                    printf("%d = %d + %d\n",n,i,n-i);
                    break;
                }
            }
        }
    }
    return 0;
}

int sushu(int x){
    int re = 0;
    if (x==2) {
        re = 1;
    }else {
        re = 1;
        for (int i=2; i<=sqrt(x)+1; i++) {
            if (x%i==0) {
                re = 0;
                break;
            }
        }
    }
    if (re == 1) {
        return 1;
    }else
        return 0;
    
}