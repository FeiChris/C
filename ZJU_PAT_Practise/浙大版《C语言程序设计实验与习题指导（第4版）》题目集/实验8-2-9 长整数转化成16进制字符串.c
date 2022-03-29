//
//  实验8-2-9 长整数转化成16进制字符串.c
//  PAT
//
//  Created by Vision on 2022/3/30.
//

#include <stdio.h>
#define MAXN 10

void f( long int x, char *p );

int main()
{
    long int x;
    char s[MAXN] = "";
    
    scanf("%ld", &x);
    f(x, s);
    printf("%s\n", s);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void f( long int x, char *p ){
    int i=0;
    int flag=0;
    int m;
    char a[MAXN]="";
    if (x<0) {
        x = -x;
        flag = 1;
    }
     do{
        m = x%16;
        x = x/16;
        
        if (m==15) {
            a[i]='F';
        }else if (m==14){
            a[i]='E';
        }else if (m==13){
            a[i]='D';
        }else if (m==12){
            a[i]='C';
        }else if (m==11){
            a[i]='B';
        }else if (m==10){
            a[i]='A';
        }else{
            a[i]=m+'0';
        }
        i++;
     }while (x>0);
    if (flag==0) {
        for (int j=0; j<i; j++) {
            p[j] = a[i-j-1];
        }
    }else{
        p[0]='-';
        for (int j=1; j<i+1; j++) {
            p[j] = a[i-j];
        }
    }
    
}
