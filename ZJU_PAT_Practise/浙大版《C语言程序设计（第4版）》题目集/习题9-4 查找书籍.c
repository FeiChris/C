//
//  习题9-4 查找书籍.c
//  PAT
//
//  Created by Vision on 2022/4/5.
//

#include <stdio.h>
#include <string.h>
typedef struct books{
    char name[31];
    double price;
}books;
int main(void)
{
    int n;
    int max = 0,min = 0;
    double a=100000,b=-1;
    books book[10];
    scanf("%d",&n);

    for (int i = 0; i<n; i++) {
        getchar();
        gets(book[i].name);
        scanf("%lf", &book[i].price);
    }
    for (int i = 0; i<n; i++) {
        if (a>book[i].price) {
            a = book[i].price;
            min = i;
        }
        if (b<book[i].price) {
            b = book[i].price;
            max = i;
        }
    }
    printf("%.2f, %s\n%.2f, %s\n",book[max].price,book[max].name,book[min].price,book[min].name);
    
    return 0;
}
