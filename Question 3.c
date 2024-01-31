/* If the marks obtained by a student in five different subjects are input through the keyboard.
write a program to find out aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks can be obtained by the student in each subject is 100*/
#include <stdio.h>

int main() {
    int marks[5], maxMarks = 100, totalMarks = 0;
    int i;

    printf("Enter marks for five subjects (out of 100):\n");

    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];}
    double percentage = (double)totalMarks / (5 * maxMarks) * 100.0;

    printf("Aggregate marks: %d\n", totalMarks);
    printf("Percentage marks: %.2lf%%\n", percentage);

    return 0;
}
