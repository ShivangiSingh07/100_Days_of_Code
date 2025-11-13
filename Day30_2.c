Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
  
  #include <stdio.h>

int main() {
    int n, num;
    int positive = 0, negative = 0, zero = 0;

    // Ask user for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Loop to read each number and classify
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }

    // Display result
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    return 0;
}
  
