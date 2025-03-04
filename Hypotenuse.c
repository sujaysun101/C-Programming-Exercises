#include <stdio.h>
#include <math.h>

int main() {
    //My Answer: 
    double a;
    double b;
    printf("\nValue of a: ");
    scanf("\n%f", &a);
    printf("\nValue of b: ");
    scanf("\n%f", &b);
    
    double c = sqrt(pow(a, 2) + pow(b, 2));

    return c;

    printf("%f", c);

    //Solution: 
    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf", C);
    
    return 0;

}