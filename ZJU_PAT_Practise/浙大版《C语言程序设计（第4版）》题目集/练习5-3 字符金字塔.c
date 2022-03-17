//
//  练习5-3 字符金字塔.c
//  PAT
//
//  Created by Vision on 2022/3/17.
//

#include <stdio.h>

void CharPyramid( int n, char ch );

int main()
{
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
    
    return 0;
}

/* 请在这里填写答案 */
void CharPyramid( int n, char ch ){
    for (int i=1; i<=n; i++) {
        for (int k=0; k<n-i; k++) {
            printf(" ");
        }
        for (int j =0; j<i; j++) {
            printf("%c ",ch);
        }
        printf("\n");
    }
}
