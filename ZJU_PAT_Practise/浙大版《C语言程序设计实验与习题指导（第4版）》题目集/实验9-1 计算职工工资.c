//
//  实验9-1 计算职工工资.c
//  PAT
//
//  Created by Vision on 2022/4/4.
//

#include <stdio.h>

typedef struct gongz{
    char name[10];
    float jbgz;
    float fdgz;
    float zc;
}zg;
int main(void)
{
    int n;
    scanf("%d",&n);
    zg a[n];
    for (int i=0; i<n; i++) {
        scanf("%s %f %f %f",a[i].name,&a[i].jbgz,&a[i].fdgz,&a[i].zc);
    }
    for (int i=0; i<n; i++) {
        printf("%s %.2f\n",a[i].name,a[i].fdgz+a[i].jbgz-a[i].zc);
    }
    return 0;
}
