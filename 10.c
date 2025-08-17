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
