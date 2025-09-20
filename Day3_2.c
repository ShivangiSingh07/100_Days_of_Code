/*Q6 (User Inputs, Operations & Output)
📋
Write a program to swap two numbers using a third variable.

Show Sample Test Cases
Input 1:
3 5
Output 1:
After swap: 5 3
Input 2:
-1 1
Output 2:
After swap: 1 -1
*/



#include <stdio.h>

int main() {
    int first, second, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    // Swapping values
    temp = first;
    first = second;
    second = temp;

    printf("After swap: %d %d\n", first, second);

    return 0;
}
