#include <stdio.h>

int main() {

    int age;

    //If statements
    if (age >= 10) {
        printf("You are now signed up!");
    } else if (age == 0) {
        printf("You can sign up! You were just born!");
    }
    else if (age < 0) {
        printf("You havent been born yet");
    }
    else {
        printf("You are too young to sign up!");
    }

    //Switch statements 
        //More efficient alternative to using many "else if" statements
        //Allows a value to be tedted for equality against many cases
    
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    if (grade == 'A') {
        printf("perfect!\n");
    } else if (grade == 'B') {
        printf("You did good!\n");
    } else if (grade = 'C')
    {
        printf("You did okay\n");
    } else if (grade == 'D') {
        printf("At least its not an F\n");
    } else if (grade == 'F') {
        printf("YOU FAILED\n");
    } else {
        printf("Thats not a valid grade\n");
    } 

    //Translate this into: 
    switch(grade) {
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least its not an F!\n");
        case 'F':
            printf("YOU FAILED\n");
            break;
        default: /* if all other cases fail, try the default case */
            printf("Please enter only valid grades\n");
    }

    return 0;
    
}