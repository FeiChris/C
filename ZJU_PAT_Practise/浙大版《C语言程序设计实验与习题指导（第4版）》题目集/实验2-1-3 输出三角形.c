#include<stdio.h>
int main(void)
{
    int i = 4;
    for(i=4;i>0;i--){
         for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}