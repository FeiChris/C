#include <stdio.h>

int main(void)
{
    int n;
    int A,B,C,D,E;
    int score;
    
    A=B=C=D=E=0;
    
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&score);
        if (score>=90) {
            A++;
        }else if (score>=80&&score<90){
            B++;
        }else if (score>=70&&score<80){
            C++;
        }else if (score>=60&&score<70){
            D++;
        }else if (score<60){
            E++;
        }
    }
    printf("%d %d %d %d %d\n",A,B,C,D,E);
}