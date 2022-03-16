#include <stdio.h>
#include <math.h>
int main(void) {
    int n,flag;
    int ms;
    scanf("%d",&n);
    if (n==1) {
        printf("None\n");
    }else{
        for (int i = 2; i<=n; i++) {
            flag = 1;
            ms = pow(2, i) - 1;
            for (int j = 2; j < ms; j++) {
                if (ms%j==0) {
                    flag = 0;
                    break;
                }
            }
            if (flag==1) {
                printf("%d\n",ms);
            }
        }
    }
    
    return 0;
}
