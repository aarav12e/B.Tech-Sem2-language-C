#include <stdio.h>
int main() {
    int marks[5], i, sum = 0;
    float percent;
    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    percent = (sum / 500.0) * 100; // Assuming each subject is out of 100
    printf("Total Marks = %d\n", sum);
    printf("Percentage = %.2f%%\n", percent);
    return 0;
}
