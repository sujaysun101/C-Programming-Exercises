#include <stdio.h>
#include <string.h>

//Using typedef
typedef char user[25];

//Using structs instead:
typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

int main() {
    //Using structs
    User user1 = {"Bro", "pass123", 123};
    User user1 = {"Bruh", "pass321", 321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%s\n", user1.id);
    printf("\n");
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%s\n", user1.id);

    //typedef = reserved keyword that gives an existing datatype a "nickname"
    //Using typedef
    user user1 = "Bro";

    return 0; 
}