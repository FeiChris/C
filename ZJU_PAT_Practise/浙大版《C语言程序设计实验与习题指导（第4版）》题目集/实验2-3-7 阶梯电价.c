#include<stdio.h>
int main(void)
{
    double elc, cost;
    
    scanf("%lf", &elc);
    if(elc > 0){
        if(elc > 50)
            cost = (elc - 50) * 0.58 + 26.5;
        else
            cost = elc * 0.53;
        printf("cost = %.2f\n", cost);
    }else
        printf("Invalid Value!\n");
    
}