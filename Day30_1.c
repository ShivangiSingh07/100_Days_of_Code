Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>

int main() {
    int n, num;
    int even = 0, odd = 0;

    // Ask user for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Loop to read each number and classify
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }

    // Display result
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
