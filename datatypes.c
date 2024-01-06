#include <stdio.h>

int main() {
    // Basic data types
    int integerVar = 10;
    char charVar = 'A';
    float floatVar = 3.14;
    double doubleVar = 2.71828;

    printf("Integer: %d\n", integerVar);
    printf("Character: %c\n", charVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);

    // Derived data types
    int intArray[5] = {1, 2, 3, 4, 5};
    int *intPointer = &integerVar;

    // Enumeration data type
    enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum Days today = Wednesday;
    printf("Today is: %d\n", today);

    // Void data type
    voidFunction();




    float Item1=8.255;
    float Item2= 100.345;
    float Item3=12.12;

    printf("Item 1: $ %-8.3f \n",Item1);
    printf("Item 2: $ %f \n",Item2);
    printf("Item 3: $ %f \n",Item3);


    const float PI = 3.14159;
    // PI = 345.89000;
    printf("pi value: %f",PI);
    return 0;
}

void voidFunction() {
    printf("This function does not return any value.\n");
}
