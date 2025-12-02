Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY
} Menu;

int main() {
    char choice[20];
    int a, b;


    scanf("%s %d %d", choice, &a, &b);

    Menu m;

    if (strcmp(choice, "ADD") == 0) {
        m = ADD;
    } else if (strcmp(choice, "SUBTRACT") == 0) {
        m = SUBTRACT;
    } else if (strcmp(choice, "MULTIPLY") == 0) {
        m = MULTIPLY;
    } else {
        printf("Invalid choice\n");
        return 0;
    }

    switch(m) {
        case ADD: 
            printf("%d\n", a + b); 
            break;
        case SUBTRACT: 
            printf("%d\n", a - b); 
            break;
        case MULTIPLY: 
            printf("%d\n", a * b); 
            break;
        default: 
            printf("Invalid operation\n");
    }

    return 0;
}
