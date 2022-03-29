//
//  实验8-1-9 输出学生成绩.c
//  PAT
//
//  Created by Vision on 2022/3/29.
//

#include <stdio.h>
#include <stdlib.h>

#define MAXS 80

int main()
{
    int n;
    int *p;
    int average=0;
    int max=0;
    int min=0;
    int x;

    scanf("%d",&n);
    if ((p=(int *)calloc(n,sizeof(int)))==NULL) {
        exit(1);
    }
    for (int i=0; i<n; i++) {
        scanf("%d",p+i);
    }
    min = *p;
    for (int i=0; i<n; i++) {
        
        x = *(p+i);
        average = average + x;
        if (max<x) {
            max = *(p+i);
        }
        
        if (min>x) {
            min = *(p+i);
        }
    }
    
    printf("average = %.2f\nmax = %.2f\nmin = %.2f",(float)average/n,(float)max,(float)min);
    return 0;
}

