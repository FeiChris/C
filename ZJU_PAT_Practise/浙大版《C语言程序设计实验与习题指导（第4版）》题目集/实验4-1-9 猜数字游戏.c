#include <stdio.h>

int main(void) {
    int number,N,guess,count;
    
    scanf("%d %d",&number,&N);
    count=0;
    for (int i = 0; i<N; i++) {
        scanf("%d",&guess);
        if (guess<0) {
            break;
        }else{
            if (guess > number) {
                printf("Too big\n");
            }else  if(guess < number){
                printf("Too small\n");
            }else{
                count = 1;
                if (i == 0) {
                    printf("Bingo!\n");
                }else if (i>0&&i<3){
                    printf("Lucky You!");
                }else if (i>=3&&i<N){
                    printf("Good Guess!\n");
                }
                break;
            }
        }
    }
    if (count==0) {
        printf("Game Over\n");
    }
    return 0;
}
