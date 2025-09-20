// Q8 (User Inputs, Operations & Output)
// 📋
// Write a program to find and display the sum of the first n natural numbers.

// Show Sample Test Cases
// Input 1:
// 5
// Output 1:
// Sum=15
// Input 2:
// 10
// Output 2:
// Sum=55 

#include <stdio.h>
int main() {
    int n, total = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        total += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, total);

    return 0;
}
