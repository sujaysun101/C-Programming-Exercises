#include<stdio.h>
#include<math.h>

int main() {
    //My Answer: 
    char operator;
    char equals;
    double number;
    double result;

    printf("\nHow many numbers?: ");
    scanf("%d", &number);

    for (int i = 0; i <= number; i++) {
        printf("Enter a number: ");

        if (operator == '+') {
            result +=
        }
        printf("Enter a number: ");
    }

    //Solution: 
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator: (+, -, *, /): ");
    scanf("%c". &operator);

    printf("\nEnter num1: ");
    scanf("%lf". &num1);

    printf("\nEnter a num2: ");
    scanf("%lf". &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\nresult: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nresult: %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult: %lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nresult: %lf", result);
            break;
        default:
            printf("%c is not valid", operator);
    }

    result 0;

}