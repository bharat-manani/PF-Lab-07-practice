
#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int passCount = 0, failCount = 0;
    int marks;
    float passSum = 0, failSum = 0;

    printf("Enter quiz marks for students (-1 for stop):\n");

    while (1) {
        printf("Enter marks: ");
        scanf("%d", &marks);

        if (marks == -1)
            break;

        if (marks >= 5 && marks <= 10) {
            pass[passCount] = marks;
            passSum += marks;
            passCount++;
        } else if (marks >= 0 && marks < 5) {
            fail[failCount] = marks;
            failSum += marks;
            failCount++;
        } else {
            printf("Invalid marks! Enter between (0–10 only.\n");
        }

        if (passCount + failCount >= 10) {
            printf("10 students marks entered.\n");
            break;
        }
    }
     int i;
    printf("Pass students marks: \n");
    for ( i = 0; i < passCount; i++)
        printf("%d ", pass[i]);

    printf("Fail students marks: \n");
    for ( i = 0; i < failCount; i++)
        printf("%d ", fail[i]);

    if (passCount > 0)
        printf("\nAverage of pass students = %.2f", passSum / passCount);
    else
        printf("\nNo pass students to calculate average.");

    if (failCount > 0)
        printf("\nAverage of fail students = %.2f", failSum / failCount);
    else
        printf("\nNo fail students to calculate average.");

    return 0;
}
