#include <stdio.h>

int max_n(int x);
int min_n(int x);

int main(void) {
    int n,item,count=0;
    int x1,x2;
    scanf("%d",&n);

    item = n;
    if (n>99&&n<1000) {
        do {
            x1 = max_n(item);
            x2 = min_n(item);
            item = x1 - x2;
            count++;
            printf("%d: %d - %d = %d\n",count,x1,x2,item);
        } while (item!=0&&item!=495);
    }
    
    return 0;
}
int max_n(int x){
    int a,b,c;
    int re;
    a = x/100;
    b = x/10%10;
    c = x%10;
    if (a>=b) {
        if (a>=c) {
            a = a*100;
            if (b>=c) {
                b = b*10;
            }else{
                c = c*10;
            }
        }else{
            c = c*100;
            a = a*10;
        }
    }else{
        if (b>=c) {
            b = b*100;
            if (a>=c) {
                a = a*10;
            }else{
                c=c*10;
            }
        }else{
            c = c*100;
            b = b*10;
        }
    }
    re = a + b + c;
    return re;
}

int min_n(int x){
    int a,b,c;
    int re;
    a = x/100;
    b = x/10%10;
    c = x%10;
    if (a<=b) {
        if (a<=c) {
            a = a*100;
            if (b<=c) {
                b = b*10;
            }else{
                c = c*10;
            }
        }else{
            c = c*100;
            a = a*10;
        }
    }else{
        if (b<=c) {
            b = b*100;
            if (a<=c) {
                a = a*10;
            }else{
                c=c*10;
            }
        }else{
            c = c*100;
            b = b*10;
        }
    }
    re = a + b + c;
    return re;
}