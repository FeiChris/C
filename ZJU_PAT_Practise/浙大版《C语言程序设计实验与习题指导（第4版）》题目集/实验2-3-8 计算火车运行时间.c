#include<stdio.h>
int main(void)
{
    int time_one, time_tow, HH, MM;
    
    scanf("%d %d", &time_one, &time_tow);
    HH = time_tow / 100 - time_one / 100;
    if(time_tow % 100 >= time_one % 100)
        MM = time_tow % 100 - time_one % 100;
    else{
        MM = time_tow % 100 + 60 - time_one % 100;
        HH = HH - 1;
    }
    printf("%02d:%02d\n",HH ,MM);
    
    return 0;
}