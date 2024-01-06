#include <stdio.h>

void hello(char[], int); // function prototype


// Function Prototype:

// function declaration without a body, before main()
// ensure that calls to a function are made with the correct arguments.


// notes:
// many c compilers do not check for parameter matching
// missing arguments will result in unexpected behaviour
// a function prototype causes the compiler to flag an error, IF ARGUMENTS ARE MISSING



int main(){
    char name[]="Arjun";
    int age = 22;
    
    hello(name,age);
    return 0;
}

void hello(char name[],int age){
 printf("Hello %s \n", name);
 printf("You are %d years old", age);
}