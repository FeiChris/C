//
//  习题6-7 简单计算器.c
//  PAT
//
//  Created by Vision on 2022/3/19.
//

#include <stdio.h>

int main(void)
{
    int result,flag;
    int x;
    char ch;
    flag = 1;
    scanf("%d",&x);
    result = x;
    ch = getchar();
    while (ch != '=') {
        scanf("%d",&x);
        switch (ch) {
            case '+':
                result = result + x;
                break;
            case '-':
                result = result - x;
                break;
            case '*':
                result = result * x;
                break;
            case '/':
                if (x != 0) {
                    result = result / x;
                }else
                    flag = 0;
                break;
            default:
                flag = 0;
                break;
        }
        ch = getchar();
    }
    if (flag==0) {
        printf("ERROR");
    }else
        printf("%d",result);
}
