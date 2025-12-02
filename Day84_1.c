Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>


typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

void printMessage(Status s) {
    switch(s) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
        default: printf("Unknown status\n");
    }
}


    Status s = FAILURE;
    printMessage(s);

    return 0;
}
