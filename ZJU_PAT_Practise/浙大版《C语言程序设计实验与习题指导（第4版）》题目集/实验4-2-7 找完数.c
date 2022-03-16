#include <stdio.h>
#include <math.h>
int main(void) {
    int n,flag,i,j,m,s;
    
    scanf("%d %d",&m,&n);
    flag=0;
    for (i = m; i <= n; i++) {
        s = 0;
        for (j = 1; j <= i/2; j++) {
            if(i % j == 0){
                s = s + j;
            }
        }
        if (i==s) {
            flag = 1;
            printf("%d = 1",i);
            for (j=2; j<=i/2; j++) {
                if (i % j == 0) {
                    printf(" + %d",j);
                }
            }
            printf("\n");
        }
    }
    if (flag==0) {
        printf("None\n");
    }
    
    return 0;
}