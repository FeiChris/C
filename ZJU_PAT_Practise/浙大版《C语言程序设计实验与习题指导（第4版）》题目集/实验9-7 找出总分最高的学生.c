//
//  实验9-7 找出总分最高的学生.c
//  PAT
//
//  Created by Vision on 2022/4/5.
//

#include <stdio.h>

struct student{
    char num[5];
    char name[10];
    int score_one;
    int score_two;
    int score_three;
};

int main()
{
    int n, i, index=0, digit=0, sum;
    
    scanf("%d\n", &n);
    struct student stu[n];
    
    for(i = 0; i < n; i++){
       scanf("%s %s %d %d %d", stu[i].num, stu[i].name, &stu[i].score_one, &stu[i].score_two,&stu[i].score_three);
    }
    for (i = 0; i < n; i++) {
        sum = stu[i].score_one + stu[i].score_two + stu[i].score_three;
        if (digit<sum) {
            digit = sum;
            index = i;
        }
    }
    printf("%s %.5s %d\n", stu[index].name, stu[index].num, digit);
    return 0;
}
