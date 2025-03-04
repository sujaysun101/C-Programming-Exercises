#include <stdio.h>

void hello(char[], int); //function prototype 

int main() {
    //Function Prototype:
        //Function declaration without a body, before the main method.
        //Ensures that calls to a function are made with the correct arguments.

        char name[] = "Bro";
        int age = 21;

        hello(name); /* Returns an error stating that tere are too few arguments to be able to compile. */

    return 0;
}

void hello(char name[], int age) {
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}

//Important Notes: 
    //Many C compilers do not check for parameter matching 
    //Missing arguments will result in unexpected behavior
    //A function prototype causes the compiler to flag an error if arguments are missing

//Advantages of a function prototype: 
    //Easier to navigate a program with main() at the top
    //Helps with debugging
    //Commonly used in header files



