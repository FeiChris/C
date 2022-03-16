#include <stdio.h>

int main(void)
{
    int n;
    float s;
    scanf("%d",&n);
    if (n <= 1600) {
        s = 0.0;
    }else if (n>1600&&n<=2500){
        s = (n-1600)*0.05;
    }else if (n>2500&&n<=3500){
        s = (n-1600)*0.1;
    }else if (n>3500&&n<=4500){
        s = (n-1600)*0.15;
    }else if (n>4500){
        s = (n-1600)*0.2;
    }
    printf("%.2f\n",s);
}