// 🖥️
// Q10 (User Inputs, Operations & Output)
// 📋
// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

// Show Sample Test Cases
// Input 1:
// 3661
// Output 
// 1:1:1
// Input 2:
// 7322
// Output 2:
// 2:2:2

#include <stdio.h>

int main() {
    int input, h, m, s;

    printf("Enter time in seconds: ");
    scanf("%d", &input);

    h = input / 3600;
    input %= 3600;
    m = input / 60;
    s = input % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
