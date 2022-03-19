//
//  实验6-1 近似求PI.c
//  PAT
//
//  Created by Vision on 2022/3/18.
//

#include <stdio.h>

double fact(int n);
double multi(int n);

int main(void)
{
    double eps,item,sum;
    int i = 0;
    
    scanf("%le",&eps);
    
    item = 1;
    sum = 0;
    while (item >= eps) {
        sum = sum + item;
        i++;
        item = 1.0 * fact(i)/multi(2 * i + 1);
    }
    sum = sum + item;
    printf("PI = %0.5lf\n",sum*2);
    return 0;
}

double fact(int n){
    double result;
    int i;
    result = 1;
    for (i=1; i<=n; i++) {
        result = result * i;
    }
    return result;
}

double multi(int n){
    double result;
    int i;
    
    result = 1;
    for (i=3; i<=n; i = i+ 2) {
        result = result * i;
    }
    return result;
}
