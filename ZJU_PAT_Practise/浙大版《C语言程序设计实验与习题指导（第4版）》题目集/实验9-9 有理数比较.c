//
//  实验9-9 有理数比较.c
//  PAT
//
//  Created by Vision on 2022/4/5.
//

#include <stdio.h>

struct yls{
    int fz;
    int fm;
};

int main()
{
    struct yls yls1,yls2;
    double a,b;
    scanf("%d/%d", &yls1.fz, &yls1.fm);
    scanf("%d/%d", &yls2.fz, &yls2.fm);
    a = yls1.fz * yls2.fm;
    b = yls1.fm * yls2.fz;
    if (a==b) {
        printf("%d/%d = %d/%d\n",yls1.fz,yls1.fm,yls2.fz,yls2.fm);
    }else if(a>b) {
        printf("%d/%d > %d/%d\n",yls1.fz,yls1.fm,yls2.fz,yls2.fm);
    }else if(a<b) {
        printf("%d/%d < %d/%d\n",yls1.fz,yls1.fm,yls2.fz,yls2.fm);
    }
    return 0;
}
