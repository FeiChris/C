//
//  习题4-7 最大公约数和最小公倍数.c
//  pat
//
//  Created by Vision on 2022/3/15.
//

#include <stdio.h>

int main(void)
{
    int n,m,k,b,i=1,m1,n1;
    int yue,bei;
    scanf("%d %d",&m,&n);
    m1=m;
    n1=n;
    while (1) {
        if(m>n){
            m = m + n;
            n = m - n;
            m = m - n;
        }
        b = n % m;
        if (b == 0) {
            yue = m;
            break;
        }else
            m = b;

    }
    while (1) {
        if(m1>n1){
            m1 = m1 + n1;
            n1 = m1 - n1;
            m1 = m1 - n1;
        }
        k = i * n1;
        
        if (k%m1==0) {
            bei = k;
            break;
        }
        i++;
    }
    printf("%d %d\n",yue,bei);
   
}
