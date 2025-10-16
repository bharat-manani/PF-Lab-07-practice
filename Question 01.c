
#include <stdio.h>

int main() {
    int arr[5], i, last;

    
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
    scanf("%d \n", &arr[i]);
    }

    
    last = arr[4];

    
    for (i = 4; i > 0; i--) {
    arr[i] = arr[i - 1];
    }

    
    arr[0] = last;

    
    printf("Output:  ");
    for (i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
    }
    

    return 0;
}
