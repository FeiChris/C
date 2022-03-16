#include<stdio.h>
int main(void)
{
    int money;
    int fen5,fne2,fen1,total,count=0;
    int i,j,k;
    
    scanf("%d",&money);
    if(money>8 && money<100){
        for(i = money/5;i>=1;i--){
            for(j = (money-i)/2;j>=1;j--){
                for(k = (money-i-j);k>=1;k--){
                    if(i*5+j*2+k == money){
                        total = i+k+j;
                        printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,total);
                        count ++;
                    }
                }
            }
        }
        printf("count = %d",count);
    }
    return 0;
}