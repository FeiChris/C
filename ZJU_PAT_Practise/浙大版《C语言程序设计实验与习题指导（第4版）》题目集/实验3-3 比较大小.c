#include <stdio.h>

int main(void) {
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if (i > j) {
        i = i + j;
        j = i - j;
        i = i - j;
        if (j > k) {
            j = j + k;
            k = j - k;
            j = j - k;
            if (i > j) {
                i = i + j;
                j = i - j;
                i = i - j;
            }
        }
    }else if(i < j){
        if (j > k) {
            j = j + k;
            k = j - k;
            j = j - k;
            if (i > j) {
                i = i + j;
                j = i - j;
                i = i - j;
            }
        }
    }
    printf("%d->%d->%d\n",i,j,k);
    return 0;
}
