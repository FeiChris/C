//
//  实验9-8 通讯录排序.c
//  PAT
//
//  Created by Vision on 2022/4/5.
//

#include <stdio.h>

struct addbook{
    char name[11];
    int birthday;
    char nub[18];
};

int main()
{
    int n, i, index=0;
    struct addbook item;
    scanf("%d\n", &n);
    struct addbook add[n];
    
    for(i = 0; i < n; i++){
       scanf("%s %d %s", add[i].name, &add[i].birthday, add[i].nub);
    }
    for (i = 0; i < n-1; i++) {
        index = i;
        for (int j = i + 1; j<n; j++) {
            if (add[index].birthday>add[j].birthday) {
                index = j;
            }
        }
        item = add[i];
        add[i] = add[index];
        add[index] = item;
    }
    for(i = 0; i < n; i++){
        printf("%s %d %s\n", add[i].name, add[i].birthday, add[i].nub);
    }
    return 0;
}

