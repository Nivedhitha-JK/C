#include <stdio.h>

int main(){

    double radius;
    double circumference;
    const double PI = 3.14159;
    double area;

    
    printf("Enter the radius of the circle:");
    scanf("%lf",&radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;


    printf("circumference of the circle is %lf \n",circumference);
    printf("area of the circle is %lf \n", area);

    return 0;
}