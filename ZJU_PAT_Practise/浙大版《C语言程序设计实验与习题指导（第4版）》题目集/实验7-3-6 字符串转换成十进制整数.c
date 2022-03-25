//
//  实验7-3-6 字符串转换成十进制整数.c
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
   // int a[Max];
    int k=0;
    int flag = 1;
    int t = 1;
    int o=0;
    
    while ((c[n] = getchar())!= '#') {
        n++;
    }
    
    for (int i = 0; i<n; i++) {
        if (flag == 1 && c[i] == '-') {
            t = 0;
        }
        if (c[i]>='A' && c[i]<='F') {
           // a[k] = c[i] - 55;
            o = o * 16 + c[i] - 'A' + 10;
            k++;
            flag = 0;
        }else if (c[i]>='a' && c[i]<='f'){
          //  a[k] = c[i] - 87;
            o = o * 16 + c[i] - 'a' + 10;
            k++;
            flag = 0;
        }else if (c[i]>='0' && c[i]<='9'){
            //a[k] = c[i] - 48;
            o = o * 16 + c[i] - '0';
            k++;
            flag = 0;
        }else
            ;
    }
    
    if (t==0) {
        o = -o;
    }
        printf("%d\n",o);
    
    
    return 0;
}
