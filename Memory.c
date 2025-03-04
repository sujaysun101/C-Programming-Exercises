#include <stdio.h>

int main() {
    //Memory = an array of bytes within RAM (think of it like a street)
    //Memory Block = a single unit (byte) within memory, used to hold some value (think of this like a person)
    //Memory Address = the address of where a memory block is located (think of this like a house address) 

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));    
    printf("%d bytes\n", sizeof(c));

    printf("%p", &a);
    printf("%p", &b);
    printf("%p", &c);


}