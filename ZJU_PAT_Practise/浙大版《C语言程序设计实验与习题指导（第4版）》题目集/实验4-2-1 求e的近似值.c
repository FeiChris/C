#include<stdio.h>
double func(double x);
int main(void)
{
    int n, i;
    double e = 1;
    
    scanf("%d", &n);
    if(n == 0)
        e = 1;
    else if(n >0 && n <= 1000){
        for(i = 2; i <= n + 1; i++){
            e = e + 1.0 / func(i-1);
        }
    }
    printf("%.8lf",e);
}

double func(double x)
{
    int i;
    double ans = 1;
    for(i = 1; i <= x; i++){
        ans = ans * i;
    }
    return ans;
}