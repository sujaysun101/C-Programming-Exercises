#include <stdio.h>
#include < math.h>

int main() {
    //My Answer: 
    char unit;
    float temp;

    printf("\nIs the temperature currently in (F), (C), or (K)?: ");
    char input = scanf("%c", &unit);
    printf("\nDo you want to convert in into (F), (C), or (K)?: ");
    char output = scanf("%c", &unit);
    if (input == 'F' && output == 'C')
    {
        int F = printf("What temperature value do you want to convert?: ");
        temp = ((F - 32) * 5)/9;
    } else if (input == 'C' && output == 'F') {
        int C = printf("What temperature value do you want to convert?: ");
        temp = ((9*(C))/5) + 32;
    } else if (input == 'K' && output == 'C') {
        int K = printf("What temperature value do you want to convert?: ");
        temp = K - 273.15;
    } else if (input == 'C' && output == 'K') {
        int C = printf("What temperature value do you want to convert?: ");
        temp = C + 273.15;
    } else if (input == 'F' && output == 'K') {
        int K = printf("What temperature value do you want to convert?: ");
        temp = (9/5)*(K - 273.15) + 32;
    } else if (input == 'K' && output == 'F') {
        int F = printf("What temperature value do you want to convert?: ");
        temp = (5/9)*(F - 32) + 273.15;
    } else if (input == output) {
        printf("\nThey're the same conversion units, silly! Try again!");
    } else {
        printf("\nThese arent valid values, please type in either (F), (C), or (K): ");
    }

    return temp;
    printf("%d", temp);

    //Solution: 
    char unit;
    float temp;

    unit = toupper(unit);

    printf("\nIs the temperature currently in (F) or (C)?: ");
    scanf("%c", &unit);

    if (unit == 'C') {
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Fahrenheit is: %.1f", temp);
    } else (unit == 'F') {
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    } else  {
        printf("\n %c is not a valid unit of measurement", unit);
    }
    

}