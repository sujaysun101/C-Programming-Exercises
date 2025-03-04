#include <stdio.h>

int main() {
    //My Answer: 
    const double PI = 3.14159;
    double r;
    double d;
    if (printf("\nRadius of Circle: ")) {
        r = scanf("%d", &r);
        int circum = 2 * PI * r;
        return circum;

    } else if (printf("\nDiameter of Circle: ")) {
        d = scanf("%d", &d);
        int circum = PI * d;
        return circum;
    }


    //Solution: 
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);
    
    printf("\nRadius of Circle: ");
    scanf("%d", &r);

    return 0;
}