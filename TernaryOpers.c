#include <stdio.h>

int findMax(int x, int y) {
    //Shortcut to if/else:
    return (x > y) ? x : y;

    //Translation of Shortcut:
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    //Ternary Operator
        //shortcut to if/else when assigning/returning a value
            //(condition)? value idf true : value if false
    
    int max = findMax(3, 4);

    printf("%d", max);

    return 0;
}

