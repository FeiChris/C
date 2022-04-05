//
//  习题9-1 时间换算.c
//  PAT
//
//  Created by Vision on 2022/4/5.
//

#include <stdio.h>
int main(void)
{
    struct time{
        int hh;
        int mm;
        int ss;
    };
    struct time times;
    int n;
    int time;
    scanf("%d:%d:%d",&times.hh,&times.mm,&times.ss);
    scanf("%d",&n);
    time = times.hh * 3600 + times.mm * 60 + times.ss + n;
    if (time>=86400) {
        time = time - 86400;
    }
    times.hh = time / 3600;
    times.mm = (time % 3600) / 60;
    times.ss = (time % 3600) % 60;
    
    printf("%02d:%02d:%02d\n",times.hh,times.mm,times.ss);
    return 0;
}
