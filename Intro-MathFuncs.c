#include <stdio.h>
#include <string.h>


int main(){
    //Hi
    /* Hiiiii */
    int x; //declaration
    x = 123; //initiliazation
    int age = 17;
    
    float gpa = 3.96; //floating point number
    char grade = 'A'; //single character
    char name[] = "Hello"; //array of characters  
    print("You are %d years old", age); //format specifiers
    printf("Hello %s\n", name);
    printf("Your average grades is %c\n", grade);
    printf("Your gpa is %f\n ", gpa); 
    
    //Data Types
    bool e = true;
    char f = 120; // signed char; contains 1 byte, anywhere between -128 and +127 for %d and %c
    unsigned char g = 256; //unsigned char; contains 1 byte, anywhere between 0 to +255 for %d and %c
    short h = 32767; //2 bytes (-32768 to 32767) %d
    unsigned short h = 65535; //2 bytes (0 to 65535) %d
    int j = 2147483647; // 4 bytes (-2147483648 to 2147483647) %d
    unsigned int g = 4294967295; //4 bytes (0 to 4294967295L) %u
    long long int i = 9223372036854775807; //8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615; //8 bytes (0 to +18 quintillion) %llu

    //Format Specifiers
        //%c = character
        //%s = string (array of characters)
        //%f = float
        //%lf = double
        //%d = integer
        //%.1 = decimal precision (1 decimal place)
        //%l = minimum field width
        //%- = left align
    
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99; 

    printf("Item 1: $%-8.2f\n", item1); //'-' for left align; '8' for number of spaces or field width between preceding and deceding sentences; '.2' for the number of decimal places needed to be shown with the value
    printf("Item 1: $%-8.2f\n", item2);
    printf("Item 1: $%-8.2f\n", item3);

    //Constants 
        //Fixed value that cannot be altered by the program during its exectuion

    const float PI = 3.14159;
    printf("%f", PI);

    //Arithmetic Operators
        //Addition -> +
        //Subtraction -> -
        //Multiplication -> *
        //Division -> /
        //Modulus -> %
        //Increment -> ++
        //Decrement -> --

    int x = 5;
    int y = 2;
    int z = x + y;
    printf("%d", z);
    int zz = x - y;
    int zzz = x * y;
    float zzzz = x / y;
    float zzzzz = x / (float) y;
    int zzzzzz = x % y;
    x++;
    y--;
    
    //Augmented Assignemnt Operators 
        //Used to replace a statement where an operator takes a variable as one of its arguments and then assigns the result back to the same variable
        
    x = x + 1;
    x += 1; 
    x = x - 1;
    x -= 1;
    x = x * 1;
    x *= 1;
    x = x / 3;
    x /= 3;
    x = x % 2;
    x %= 2;

    //User Input
    char name[25];
    int age;

    printf("\nWhats your name?");
    scanf("%s", &name);
    //name is a pointer to the srray of chars where the string read is copied from
    //25 is the maximum number of characters to be chopied into name (including the terminating null character)
    //stdin is a pointer to a file object that identifies an input stream
        //
    //fgets returns a pointer to the string where the input is stored
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("How old are you? "); //prinf used for printing output
    scanf("%d", &age); //scanf used for scanning input
        
    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    //Math Functions
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\n%lf", A);





    return 0;
}