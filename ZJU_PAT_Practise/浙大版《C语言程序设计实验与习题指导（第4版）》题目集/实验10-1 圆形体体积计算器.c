//
//  实验10-1 圆形体体积计算器.c
//  PAT
//
//  Created by Vision on 2022/4/5.
//
#include <stdio.h>
#define PI 3.1415926535
int main()
{
    int n;
    int flag = 0;
    double V,r,h;
    while (1) {
        if (flag == 1) {
            break;
        }
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
        V=r=h=0;
        scanf("%d",&n);
        switch (n) {
            case 1:
                printf("Please enter the radius:\n");
                scanf("%lf",&r);
                V = 4 * PI * r * r * r / 3;
                printf("%.2lf\n",V);
                break;
            case 2:
                printf("Please enter the radius and the height:\n");
                scanf("%lf %lf",&r,&h);
                V = PI * r * r * h;
                printf("%.2lf\n",V);
                break;
            case 3:
                printf("Please enter the radius and the height:\n");
                scanf("%lf %lf",&r,&h);
                V = PI * h * r * r / 3;
                printf("%.2lf\n",V);
                break;
            default:
                flag = 1;
                break;
        }
    }
    
    return 0;
}
