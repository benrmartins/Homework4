// Benjamin Martins
// 4/19/23

// First I created a structure of students to hold the different variables of student. Then I created an object of the stucture student.
// Then I had the user input the students name and the marks they got on each subject and store it into a variable. After that I
// loop through the mark array in the structure and adds each number to store it into some. Lastly I used if statements to add the correct letter grade
// to the structure using the average sum of the marks and total

// I honestly did not face any challenges in this program. I used the knowledge I got from program1 to help me build a simple structure and used if
// statements to get each of the variables to be inside that static object. I used an array for marks like program 1.

#include <stdio.h>

// structure of students
struct student {
    char name[100];
    int marks[5];
    int total;
    char grade;
};


int main(int argc, char *argv[]) {

    // structure variable and sum
    struct student s1;
    int sum = 0;

    // user input of the name
    printf("Enter the name of student: ");
    scanf("%s", s1.name);

    // user input of each subject grade into an array
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

    // loops through the mark array and adds each number to store it into sum
    for(int i = 0; i < 5; i++) {
        sum += s1.marks[i];
    }

    // adds the sum to the total in the structure
    s1.total = sum;

    // gets the average grade
    sum = sum / 5;

    // Uses if statements to add the correct letter grade to the structure
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

    // prints out the information of the structure
    printf("Hello %s, Your total marks are %d and Grade %c\n", s1.name, s1.total, s1.grade);

    return 0;






}