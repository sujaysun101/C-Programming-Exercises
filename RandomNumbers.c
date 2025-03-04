#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Pseudo Random Numbers = a set of values or elements that are statistically random
        //(DONT use these for any sort of cryptographic security)

    srand(time(0));

    int number1 = (rand() % 6) + 1; //Random number between 0 and 32,767
    int number2 = (rand() % 6) + 1; //Random number between 0 and 32,767
    int number3 = (rand() % 6) + 1; //Random number between 0 and 32,767

    printf("%d", number1);
    printf("%d", number2);
    printf("%d", number3);

    return 0;

}