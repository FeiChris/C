#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

/* 你的代码将被嵌在这里 */
void hollowPyramid ( int n ){
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i-1+n; j++) {
            if (j == n + (i-1) || j == n - (i-1)) {
                printf("%d",i);
            }else{
                if (i<n) {
                    printf(" ");
                }else
                    printf("%d",i);
            }
                
        }
        printf("\n");
    }
}