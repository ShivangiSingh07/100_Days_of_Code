Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

  #include <stdio.h>

int main() {
    char num[100];
    int freq[10] = {0};  // Frequency array for digits 0–9

    // Input the number as a string
    printf("Enter an integer: ");
    scanf("%s", num);

    // Count digit frequencies
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            freq[num[i] - '0']++;
        }
    }

    // Find the digit with the highest frequency
    int maxFreq = 0, mostFreqDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Most frequent digit: %d\n", mostFreqDigit);
    return 0;
}

