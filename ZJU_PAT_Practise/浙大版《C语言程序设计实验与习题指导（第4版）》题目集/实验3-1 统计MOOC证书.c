#include <stdio.h>

int main(void) {
    int cnt_a,cnt_f,cnt_p,i,n,score;
    scanf("%d",&n);
    cnt_a=cnt_f=cnt_p=0;
    for (i = 1; i<=n; i++) {
        scanf("%d",&score);
        if (score>=85) {
            cnt_p++;
        }else if(score>=60){
            cnt_a++;
        }else{
            cnt_f++;
        }
    }
    printf("%d %d %d\n",cnt_p,cnt_a,cnt_f);
    return 0;
}