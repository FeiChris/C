//
//  习题7-6 统计大写辅音字母.c
//  PAT
//
//  Created by Vision on 2022/3/25.
//

#include<stdio.h>
#define Max 80

int main(void)
{
    char c[Max];
    int n=0;
    int count=0;
    
    while ((c[n] = getchar())!= '\n') {
        n++;
    }
    c[n]='\0';
    
    for (int i = 0; i<n; i++) {
        if (c[i]>='A'&&c[i]<='Z') {
            if (c[i]!='A' && c[i]!='E' && c[i]!='I' && c[i]!='O' && c[i]!='U') {
                count++;
            }
        }
    }
    printf("%d",count);
    
    return 0;
}
