//
//  实验9-10 平面向量加法.c
//  PAT
//
//  Created by Vision on 2022/4/5.
//


#include <stdio.h>

struct zb{
    double x;
    double y;
};

int main()
{
    struct zb v1,v2,V;
    
    scanf("%lf %lf %lf %lf",&v1.x,&v1.y,&v2.x,&v2.y);
    V.x = v1.x + v2.x;
    V.y = v1.y + v2.y;
    if(V.x>-0.05&&V.x<0)
        V.x=0.0;
    if(V.y>-0.05&&V.y<0)
        V.y=0.0;
    printf("(%.1lf, %.1lf)\n",V.x,V.y);
    return 0;
}
