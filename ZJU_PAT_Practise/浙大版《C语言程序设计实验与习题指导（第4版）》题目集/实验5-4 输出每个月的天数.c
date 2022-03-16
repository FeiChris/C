#include <stdio.h>

int MonthDays(int year, int month);

int main()
{
    int ndays, month, year;

    scanf("%d", &year);
    for(month = 1; month <= 12; month++){
        ndays = MonthDays(year, month);
        printf("%d ", ndays);
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
int MonthDays(int year, int month){
    int result;
    int Feb = 0;
    if ((year % 4 == 0 && year %100 !=0) || year % 400 ==0) {
        Feb = 1;
    }
    switch (month) {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            result = 31;
            break;
        case 2:
            if (Feb == 1 ) {
                result = 29;
            }else
                result = 28;
            break;
        default:
            result = 30;
            break;
    }
    return  result;
}