#include<stdio.h>
#include<math.h>
int main()
{
    double  x1 = 0.0,x2 = 0.0,t,a,b,c,real,imag;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a == 0 && b == 0 && c == 0)
    {
        printf("Zero Equation");
        return 0;
    }
    else if(a == 0 && b == 0 && c!=0){
        printf("Not An Equation");
        return 0;
    }
    t=pow(b,2)-4*a*c*1.0;
    if(a!=0&&t>=0)
    {
    x1=(-b+sqrt(t))/(2 * a *  1.0);
    x2=(-b-sqrt(t))/(2 * a * 1.0);
    }
    if(t>=0&&(a==0||a!=0))
    {
        if(a!=0&&t==0) x1=x2=-b*1.0/(2*a);
        if(a==0&&b!=0&&t>0) x1=x2=-c*1.0/b;
    }
     if(t >= 0 &&(a==0||a!=0))
    {
        if(x1>x2)
            printf("%.2lf\n%.2lf",x1,x2);
        else if(x1<x2)
            printf("%.2lf\n%.2lf",x2,x1);
        else
            printf("%.2lf",x1);
    }

    else if(t<0&&a!=0)
    {
        t=4*a*c-b*b;
        real=(-b*1.0)/(2*a*1.0);
        imag=(sqrt(t)*1.0)/(2*a*1.0);
        if(b==0)
            real=0;
        printf("%.2lf+%.2lfi\n",real,imag);
        printf("%.2lf%.2lfi",real,-imag);
    }
 }