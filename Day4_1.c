/*Q7 (User Inputs, Operations & Output)
📋
Write a program to swap two numbers without using a third variable.

Show Sample Test Cases
Input 1:
10 20
Output 1:
After swap: 20 10
Input 2:
7 14
Output 2:
After swap: 14 7
*/

#include <stdio.h>
int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Values before swap:\nnum1 = %d\nnum2 = %d\n", num1, num2);

    // Swapping without a temporary variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Values after swap:\nnum1 = %d\nnum2 = %d\n", num1, num2);

    return 0;
}
