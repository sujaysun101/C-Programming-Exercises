#include <stdio.h>

int main() {
    /*
    //precede 'test.txt' with the absolute path of your desktop, if you want to add your file to your desktop
    FILE *pf = fopen("test.txt", "w");

    //w = for writing and rewriting into a file 
    //r = for reading a file
    //a = for appending into a file

    fprintf(pf, "Spongebob SquarePants");

    fclose(pf);
    */

   if (remove("test.txt") == 0) {
    printf("File deleted");
   } else {
    printf("File not deleted");
   }

    return 0;
}