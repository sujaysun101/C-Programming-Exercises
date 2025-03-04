//1. Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i = 0;
    int j = 10;
    while (i <= 10) {
        printf("%d", i);
        i++;
    }
    while (j >= 0) {
        printf("%d", j);
        j--;
    }

    return 0;
}

//2. Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.

int main() {
  int num;
  int total = 0;
  printf("Enter numbers (0 to stop)");
  while (1) {
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num == 0) {
      break;
    }

    if (num > 0) {
      total += num;
    }
  }

  printf("The sum is %d", total);

  return 0;
}

//3. Write a C program that calculates the product of numbers from 1 to 5 using a while loop.

int main() {
    int i = 1;
    int p = 1;
    while (i <= 5) {
        p *= i;
        i++;
    }

    return 0;
}

//4. Write a C program that prompts the user to input a series of numbers until they input a duplicate number. Use a while loop to check for duplicates.

int main() {
    int userInput;
    int previousResponses[100];
    int containsDup = 0;
    int index = 0;

    printf("Enter numbers");

    while (!containsDup) {
        printf("Enter a number: ");
        int a = scanf("%d", &userInput);

        if (a != 1) {
            printf("Invalid input. Enter another input");
            continue;
        }

        for (int i = 0; i < index; i++) {
            if (userInput == previousResponses[i]) {
                containsDup = 1;
                printf("Duplicate found. Program terminated. ");
                break;
            }
        }

        previousResponses[index++] = userInput;
    }

  return 0;
}

//5. Write a C program that generates a random number between 1 and 20 and asks the user to guess it. Use a while loop to give the user multiple chances until they guess the correct number.

int main() {
    int min = 1;
    int max = 20;
    int answer;
    int guess;

    srand(time(0));
    answer = (rand() % max) + min;

    printf("Enter any number between 1 and 20");

    while (answer != guess) {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (answer == guess) {
            break;
        }
    }

    printf("Correct guess!");

    return 0;
}

//6. Write a C program that prompts the user to enter a positive integer. It then calculates and prints the factorial of that number using a while loop.

int main() {

    int num;
    int factorial;

    printf("Please enter positive integers");
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    while (num > 0) {
        for (int i = num; i > 1; i--) {
            factorial *= (num * (i - 1));
            num = num - 2; 
        }
    }

    printf("%d", factorial);

    return 0;
}
