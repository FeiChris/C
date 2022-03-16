#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit( int number, int digit ){
    int result=0,a;
    if (number == 0)
        result = 1;
    else{
        if (number<0) {
        number = -number;
    }
    while (number > 0) {
        a = number % 10;
        if (digit == a) {
            result++;
        }
        number = number / 10;
    }
    }
    
    return result;
}