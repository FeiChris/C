#include <stdio.h>
#include <math.h>
int main(void)
{
    int a,b,c;
    float area,p,perimater;
    scanf("%d %d %d",&a,&b,&c);
    perimater = a + b + c;
    p = perimater / 2.0;
    if (a + b > c && a + c > b && b + c > a){
        area = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("area = %.2f; perimeter = %.2f\n",area,perimater);
    }else{
        printf("These sides do not correspond to a valid triangle\n");
    }
    return 0;
}