#include <stdio.h>

struct student {
    char name[100];
    int marks[5];
    int total;
    char grade;
};


int main(int argc, char *argv[]) {

    struct student s1;
    int sum = 0;

    printf("Enter the name of student: ");
    scanf("%s", s1.name);

    printf("Enter the mark of subject 1: ");
    scanf("%d", &s1.marks[0]);

    printf("Enter the mark of subject 2: ");
    scanf("%d", &s1.marks[1]);

    printf("Enter the mark of subject 3: ");
    scanf("%d", &s1.marks[2]);

    printf("Enter the mark of subject 4: ");
    scanf("%d", &s1.marks[3]);

    printf("Enter the mark of subject 5: ");
    scanf("%d", &s1.marks[4]);

    for(int i = 0; i < 5; i++) {
        sum += s1.marks[i];
    }

    s1.total = sum;

    sum = sum / 5;

    if (sum >= 90 && sum <= 100)
        s1.grade = 'A';
    else if (sum >= 80)
        s1.grade = 'B';
    else if (sum >= 70)
        s1.grade = 'C';
    else if (sum >= 60)
        s1.grade = 'D';
    else
        s1.grade = 'F';

    printf("Hello %s, Your total marks are %d and Grade %c", s1.name, s1.total, s1.grade);

    return 0;






}