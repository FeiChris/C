//
//  习题7-5 找鞍点.c
//  PAT
//
//  Created by Vision on 2022/3/25.
//

#include<stdio.h>
#define MANX 6

int main(void)
{
    int n,i,j,k,l;
    int a[MANX][MANX];
    
    scanf("%d",&n);
    for(i=0; i<n; i++)  {
        for(j=0; j<n; j++)  {
            scanf("%d",&a[i][j]);
        }
    }
    
    int index=0,judge=1;
    k=0;
    l=0;
    if(n==1){
        printf("0 0");//只有一个点时，一定是鞍点
    }else{
        for(i=0; i<n; i++){
            index=i;
            for(l=0; l<n; l++) {
                if(a[i][k]<=a[i][l]) {  //数组元素之间比较，若比a[i][k]大，则将数组列标赋给k
                    k=l;
                }
            }
            for(j=0; j<n; j++){
                if(a[index][k]>a[j][k]){  //若此行最大值不是列所在最小值，把小的行标赋给index
                    index=j;
                    break;
                }
            }
            if(i==index){  //如果列最小数据的行数  和  行最大数据的行数不一致 那么就说明不是鞍点
                judge=0;
                break;
            }
        }
        if(judge==0)    printf("%d %d",i,k);
        else         printf("NONE");
    }
    return 0;
}
