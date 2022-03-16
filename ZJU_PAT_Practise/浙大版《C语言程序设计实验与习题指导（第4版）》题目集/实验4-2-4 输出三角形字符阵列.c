#include <stdio.h>

int main(void) {
    int n;
    int a = 65;
    scanf("%d",&n);
    
    for (int i = n; i>0; i--) {
        for (int j = 0; j<i; j++) {
            printf("%c ",a++);
        }
        printf("\n");
    }
    return 0;
}