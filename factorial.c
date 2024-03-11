#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else
        {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input the number
    printf("Enter a non-negative integer to calculate its factorial: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Calculate and print the factorial
        printf("Factorial of %d is: %d\n", num, factorial(num));
    }

    return 0;
}
