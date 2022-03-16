#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos( double e, double x ){
    int flag=1,i=0;
    double result=0,temp=1,s = 0,xia=1;
  while (fabs(temp)>=e){
        s = pow(x, i);
        if(i==0)
            xia = 1.0;
        else{
            xia = 1;
            for (int j = 1; j<=i; j++) {
                xia = xia * j;
            }
        }
        temp = s / xia;
        temp = flag * temp;
        result = result + temp;
        flag = -flag;
        i = i + 2;
    }
    return result;
}
