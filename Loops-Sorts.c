#include <stdio.h>
#include <string.h>

int main() {
    //for loop - repeats a section of code a limited amount of times
    for (int index = 10; index >= 1; index++) {
        printf("%d\n", index);
    }
    //while loop = repeats a section od code possibly unlimited times.
    //WHILE some condition remains true
    //A while loop might not execute at all

    char name[25];

    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("Hello %s", name);

    while (stren(name) == 0) {
        printf("\nYou did not enter your name");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    //while loop = checks a condition, THEN executes a black of code if condition is true
    //do while llop = always executes a black of code once, THEN checks a condition
    int number = 0;
    int sum = 0;

    do {
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if (number > 0) {
            sum += number;
        }
    } while (number > 0);

    //Nested loop = a loop inside of another loop
    int rows;
    int columns;
    char symbol;
    
    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    scanf("%c");

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    //continue = skips rest of code & forces the next iteration of the loop
    //break = exits a loop/switch

    for (int i = 1; i <= 20; i++) {
        if ( i == 13) {
            //continue;
            //break;
        }
        printf("%d\n", i);
    }

    //Array = Data structure that can store many values of the same data type 

    double prices[5];
    char name[] = "Bro";

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 25.0;
    prices[4] = 20.0;

    printf("$%.2lf", prices[3]);

    //Print an Array with a Loop
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    printf("%lf", prices[0]);

    for (int i = 0; i < 5; i++) {
        printf("$%.2lf", prices[i]);
    }

    //Size-Of Operator
    printf("%d bytes\n", sizeof(prices));

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
        printf("$%.2lf", prices[i]);
    }

    //2D Array = an array where each element is an entire array 
        //Useful if you need a matrix, grid, or table of data

    //int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int numbers[2][3];

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d", rows);
    printf("columns: %d", columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }

    //Array of Strings 
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    //Cant directly assign a new value, after array is created
    cars[0][0] = "Tesla";

    //Instead, use strcpy
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) {
        printf("%s\n", cars[i]);
    }

    //Swap values of two variables 
    char x[15] = "water";
    char y[15] = "soda";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    //Sorting an Array
        //THis specific method is known as a Basic Bubble Sort
    int array[] = {0, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    return 0;
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printArray("%d ", array[i]);
    }
}


void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}