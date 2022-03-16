#include<stdio.h>
#include<math.h>
int main(void)
{
    int N,i,j,a,ans=0,temp=0;
    int list[10]={0};

    scanf("%d",&N);
    if(N>=3 && N<=7){
        for (i = 0; i < 10; ++i){
            list[i] = pow(i,N);
        }
        for(i=pow(10,N-1);i<pow(10,N);i++){
            a = i;
            for(j=0;j<N;j++){
                temp = a % 10;
                a = a /10;
                ans = ans + list[temp];
            }
            if(i == ans)
                printf("%d\n",ans);
            ans = 0;
        }
    }
    return 0;
}