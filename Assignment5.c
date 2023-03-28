//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

#include <stdio.h>

int main() {
    int marks[50], n, i, passed = 0, failed = 0, max = 0;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i+1);
        scanf("%d", &marks[i]);
        
        // check for max score
        if (marks[i] > max) {
            max = marks[i];
        }
        
        // check if student passed or failed
        if (marks[i] == -1) {
            continue;
        }
        else if (marks[i] >= 50) {
            passed++;
        }
        else {
            failed++;
        }
    }
    
    printf("Maximum score: %d\n", max);
    printf("Number of passed students: %d\n", passed);
    printf("Number of failed students: %d\n", failed);
    
    return 0;
}

