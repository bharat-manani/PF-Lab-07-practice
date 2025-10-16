#include <stdio.h>

int main() {
    int numbers[10];
    int i, search_num, count = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search_num);

   
    for (i = 0; i < 10; i++) {
        if (numbers[i] == search_num) {
            count++;
        }
    }

    if (count > 0) {
        printf("The number %d occurred %d times.\n", search_num, count);
    } else {
        printf("number not found\n");
    }

    return 0;
}
