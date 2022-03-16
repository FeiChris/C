#include <stdio.h>

void safe_flush(FILE *fp);

int main(void) {
    int n;
    char c;
    int letter,blank,digit,other;
    letter=blank=digit=other=0;
    scanf("%d",&n);
    safe_flush(stdin);
    for (int i = 1; i <= n; i++) {
        scanf("%c",&c);
        if ((c>=65 && c<=90)||(c>=97 && c<=122)) {
            letter++;
        }else if (c == 32 || c == 10){
            blank++;
        }else if (c>=48 && c<=57){
            digit++;
        }else
            other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);
    return 0;
}
void safe_flush(FILE *fp)
{
    int ch;
    while( (ch = fgetc(fp)) != EOF && ch != '\n' );
}
