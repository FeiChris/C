//
//  实验7-2-10 简易连连看.c
//  PAT
//
//  Created by Vision on 2022/3/26.
//

#include<stdio.h>
#define max 8

int main(void)
{
    char a[max][max];
    int n,k;
    int x1,x2,y1,y2;
    int bingo_times=0,fail_times=0;
    scanf("%d",&n);
    getchar();
    for (int i=0; i<2*n; i++) {
        for (int j = 0; j<2*n; j++) {
            scanf("%c ",&a[i][j]);
        }
    }
    scanf("%d",&k);
    
    for (int i=0; i<k; i++) {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        x1--;
        y1--;
        x2--;
        y2--;
        if(a[x1][y1]==a[x2][y2]&&a[x1][y1]!='*'&&a[x2][y2]!='*'){
            a[x1][y1]=a[x2][y2]='*';
            bingo_times++;
            if(bingo_times==n*n*2){
                printf("Congratulations!\n");
                break;
            }
            for(int i=0;i<n*2;i++){
                for(int j=0;j<n*2;j++){
                    putchar(a[i][j]);
                    if(j==2*n-1)putchar('\n');
                    else putchar(' ');
                }
            }
        }else{
            fail_times++;
            printf("Uh-oh\n");
            if(fail_times==3){
                printf("Game Over\n");
                break;
            }
        }
    }
    return 0;
}

