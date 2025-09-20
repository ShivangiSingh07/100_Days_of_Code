/*Q5 (User Inputs, Operations & Output)
📋
Write a program to convert temperature from Celsius to Fahrenheit.

Show Sample Test Cases
Input 1:
0
Output 1:
Fahrenheit=32
Input 2:
100
Output 2:
Fahrenheit=212
*/


#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Input temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;

    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
