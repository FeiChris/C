//
//  实验9-3 计算平均成绩.c
//  PAT
//
//  Created by Vision on 2022/4/4.
//

#include <stdio.h>

typedef struct student{
    char nub[5];
    char name[10];
    int grade;
}student;
int main(void)
{
    int n;
    float average=0;
    scanf("%d",&n);
    student students[n];
    for (int i = 0; i<n; i++) {
        scanf("%s %s %d", students[i].nub, students[i].name, &students[i].grade);
        average = average + students[i].grade;
    }
    average = average / n;
    
    printf("%.2f\n",average);
    for (int i = 0; i<n; i++) {
        if (average>students[i].grade) {
            printf("%s %.5s\n",students[i].name,students[i].nub);
        }
    }
   
    return 0;
}

