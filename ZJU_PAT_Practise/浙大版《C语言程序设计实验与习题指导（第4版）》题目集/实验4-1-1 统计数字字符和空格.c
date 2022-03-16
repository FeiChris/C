#include <stdio.h>

int main(void) {
    int blank,digit,other;
    char ch;
    blank = digit = other = 0;
    ch = getchar();
    while (ch != '\n') {
        switch (ch) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                digit++;
                break;
            case ' ':
                blank++;
                break;
            default:
                other++;
                break;
        }
        ch = getchar();
    }
    printf("blank = %d, digit = %d, other = %d\n",blank,digit,other);
    return 0;
}
