🧪 Sample Test Cases
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5
Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2


#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    int quot = num1 / num2;

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quot);

    return 0;
}
