#include <stdio.h>
#include <stdbool.h>

int main() {

    //Logical Operators
        //&& (AND) checks if two conditions are true.
        float temp = 25;
        bool sunny = false;

        if (temp >= 0 && temp <= 30 && sunny == true) {
            printf("The weather is good!");
        } else {
            printf("\nThe weather id bad!");
        }

        //|| (OR) checks if at least one condition is true.
        float temp = 25;
        if (temp <= 0 || temp >= 30) {
            printf("\nThe weather is bad!");
        } else {
            printf("\nThe weather is good!");
        }

        //! (NOT) reverses the state of a condition.
        if (!sunny) {
            printf("\nIts cloudy outside!");
        } else {
            printf("\nIts sunny outside!");
        }
    
        return 0;


        //Invokes the function
        //birthday();

        char name[] = "Bro";
        int age = 21;

        //Arguments
        birthday(name, age);

        //Return Statement
        double x = square(3.14);
        printf("%lf", x);
}

//Functions

void birthday(char name[], int age) { /* Creates the function */
    printf("\nHappy Birthday Dear %s!", name);
    printf("\nYou are %d years old", age);
}

double square(double x) {
    double result = x * x;
    return result;
}