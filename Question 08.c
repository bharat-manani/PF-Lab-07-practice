#include <stdio.h>

int main() {
    char str[100];

    printf("Enter characters (input stops when an alphabet is found): ");
    scanf("%[^A-Za-z]", str);  // Accepts everything except alphabets (A–Z, a–z)

    printf("\nYou entered non-alphabetic characters: %s\n", str);

    return 0;
}

