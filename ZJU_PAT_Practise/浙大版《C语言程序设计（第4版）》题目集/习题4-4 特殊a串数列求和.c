//
//  习题4-4 特殊a串数列求和.c
//  pat
//
//  Created by Vision on 2022/3/14.
//

#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,n,sum,i = 0,temp;
    
    sum = 0;
    scanf("%d %d",&a,&n);
    for(i=0;i<n;i++){
        temp = a * (n-i) * pow(10,i);
        sum = sum + temp;
    }
    printf("s = %d\n",sum);
    return 0;
}
