#include <stdio.h>

int main(void) {
    int lower, upper;
    float C;
    scanf("%d %d",&lower,&upper);
    if(lower > 0 && upper <= 100 && lower <= upper){
        printf("fahr celsius\n");
        for (int i = lower; i <= upper; i = i + 2) {
            C = 5.0 * ((float)i - 32) / 9;
            printf("%d %5.1f\n",i,C);
        }
    }else
        printf("Invalid.\n");
    return 0;
}