#include <stdio.h>

int main(void) {
    int n,t,t1,t2,m;
    
    m = 0;
    t1 = 1;
    t = t2 = 0;
    scanf("%d",&n);
    for (int i=1; t<n; i++) {
        if (i>1) {
            t1 = t2;
            t2 = t;
            
        }
        t = t2 + t1;
        m=i;
    }
    printf("%d\n",m);
    return 0;
}