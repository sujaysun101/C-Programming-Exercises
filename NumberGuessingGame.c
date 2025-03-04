#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int num;
    const int min = 1;
    const int max = 100;
    int guesses;
    int guess;

    srand(time(0));
    num = (rand() % max) + min;

    
    do {
        printf("Im thinking of a number between 1 - 100. Enter a guess: ");
        scanf("%d", &num);

        if (guess < num) {
            printf("Too low. Enter another guess: ");
        } else if (guess > num) {
            printf("Too high. Enter another guess: ");
        } else if (guess == num) {
            printf("That's correct!");
        } else {
            printf("Incorrect value entered. Enter another guess: ");
        }
        guesses++;
    } while (guess != num); 

    printf("You answered %d in %d guesses", num, guesses);
    

    return 0;
}