#include <cstdio>

int main() {
    int num, original, remainder;
    int reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Negative numbers cannot be palindromes.\n");
    } else {
        original = num;

        while (num > 0) {
            remainder = num % 10;
            reversed = (reversed * 10) + remainder;
            num = num / 10;
        }

        if (original == reversed) {
            printf("Result: %d IS a Palindrome.\n", original);
        } else {
            printf("Result: %d is NOT a Palindrome.\n", original);
        }
    }

    return 0;
}
