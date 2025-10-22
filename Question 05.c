#include <stdio.h>

int main() {
    int arr[10];
    int i, max, min, diff;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    diff = max - min;

    printf("\nMaximum value = %d", max);
    printf("\nMinimum value = %d", min);
    printf("\nDifference (max - min) = %d\n", diff);

    return 0;
}
