//Write a C program to accept marks of 5 subjects from the user, calculate the total percentage, and display the corresponding grade according to the following criteria:

// A: Percentage ≥ 90

// B: Percentage ≥ 80 and < 90

// C: Percentage ≥ 60 and < 80

// D: Percentage < 60
#include <stdio.h>
int main() {
    int marks[5], i, sum = 0;
    float percent;
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    percent = (sum / 500.0) * 100;
    printf("Percentage = %.2f%%\n", percent);
    if (percent >= 90)
        printf("Grade: A\n");
    else if (percent >= 80)
        printf("Grade: B\n");
    else if (percent >= 60)
        printf("Grade: C\n");
    else
        printf("Grade: D\n");
    return 0;
}
