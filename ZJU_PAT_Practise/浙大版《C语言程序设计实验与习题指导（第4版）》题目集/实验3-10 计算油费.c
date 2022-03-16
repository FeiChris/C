#include <stdio.h>
#include <math.h>
int main(void)
{
    int a,b;
    char c;
    double s=0;
    scanf("%d %d %c",&a,&b,&c);
    if (c == 'm') {
        s = 0.95;
        switch (b) {
            case 90:
                s = s * a * 6.95;
                break;
            case 93:
                s = s * a * 7.44;
                break;
            default:
                s = s * a * 7.93;
                break;
        }
    }else if(c == 'e'){
        s = 0.97;
        switch (b) {
            case 90:
                s = s * a * 6.95;
                break;
            case 93:
                s = s * a * 7.44;
                break;
            default:
                s = s * a * 7.93;
                break;
        }
    }
    printf("%.2lf",s);
    return 0;
}
