#include <stdio.h>
#include <math.h>
int main(void)
{
    int day,a;
    scanf("%d",&day);
    a = day % 5;
    if (a<=3 &&a>0) {
        printf("Fishing in day %d\n",day);
    }else
        printf("Drying in day %d\n",day);
    
    return 0;
}