#include <stdio.h>

int main() {
    //BITWISE OPERATORS = special operators used in bit level programming (knowing binary is important for this topic)
        // & = AND
        // | = OR
        // ^ = XOR
        // << left shift
        // >> right shift

        int x = 6; // 00000110
        int y = 12; // 00001100
        int z = 0; // 00000000 

        int x = 6; // 00000110
        int y = 12; // 00001100
        int z = 4; // 00000100 // equivalent to 4 when changed using AND operator

        z = x & y;
        printf("AND = %d\n", z);
        
        int x = 6; // 00000110
        int y = 12; // 00001100
        int z = 14; // 00001110 // equivalent to 14 when changed using OR operator

        z = x | y;
        printf("OR = %d\n", z);
        
        int x = 6; // 00000110
        int y = 12; // 00001100
        int z = 10; // 00001010 // equivalent to 10 when changed using XOR operator

        z = x ^ y;
        printf("XOR = %d\n", z);
        
        int x = 6; // 00000110
        int y = 12; // 00001100
        int z = 12; // 00001100 // equivalent to 12 when changed using LFTSHFT operator

        z = x << 1;
        printf("LFTSHFT = %d\n", z);
        
        int x = 6; // 00000110
        int y = 12; // 00001100
        int z = 3; // 00000011 // equivalent to 3 when changed using RGHTSHFT operator

        z = x >> y;
        printf("RGHTSHFT = %d\n", z);
        


        return 0; 
}