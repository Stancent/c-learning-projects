#include <stdio.h>

int main() {

    int totalStudents;
    float grade;
    float total = 0;
    float average;

    printf("====================================\n");
    printf("        Student Grade Analyzer\n");
    printf("====================================\n");

    printf("Enter number of students: ");
    scanf("%d", &totalStudents);

    for(int i = 1; i <= totalStudents; i++) {
        printf("Enter grade for student %d: ", i);
        scanf("%f", &grade);

        total += grade;
    }

    average = total / totalStudents;

    printf("\nAverage grade: %.2f\n", average);

    if(average >= 60) {
        printf("Status: PASS\n");
    } else {
        printf("Status: FAIL\n");
    }

    printf("====================================\n");

    return 0;
}
