Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>


typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;


typedef struct {
    char name[50];
    Gender gender;
} Person;

int main() {
    char input[20];
    scanf("%s", input);

    Person p;

    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(input, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(input, "OTHER") == 0) {
        p.gender = OTHER;
    } else {
        printf("Invalid gender\n");
        return 0;
    }

    switch(p.gender) {
        case MALE: 
            printf("Male\n"); 
            break;
        case FEMALE: 
            printf("Female\n"); 
            break;
        case OTHER: 
            printf("Other\n"); 
            break;
        default: 
            printf("Unknown\n");
    }

    return 0;
}
