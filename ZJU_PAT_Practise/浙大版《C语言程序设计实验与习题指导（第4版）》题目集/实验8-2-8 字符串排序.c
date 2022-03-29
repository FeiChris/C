//
//  实验8-2-8 字符串排序.c
//  PAT
//
//  Created by Vision on 2022/3/29.
//

#include <stdio.h>
#include <string.h>

#define MAXS 80

int main()
{
    char str[5][MAXS];
    char item[MAXS];
    
    int index;
    
    for (int i=0; i<5; i++) {
        scanf("%s",str[i]);
    }
    

    for (int i=0; i<4; i++) {
        index = i;
        for (int j=i+1; j<5; j++) {
            if (strcmp(str[index], str[j])>0) {
                index = j;
            }
        }
        strcpy(item, str[i]);
        strcpy(str[i], str[index]);
        strcpy(str[index], item);
    }
    printf("After sorted:\n");
    for (int i=0; i<5; i++) {
        printf("%s\n",str[i]);
    }
    
    return 0;
}

