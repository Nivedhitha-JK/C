#include <stdio.h>
int main(){

    char grade;

    printf("Enter your grade:");
    scanf("%c",&grade);

    switch(grade){
     case 'A':
        printf("Perfect!");
        break;
     case 'B':
        printf("You did good!");
        break;
     case 'C':
        printf("You did okay!");
        break;
     case 'D':
        printf("Atleast you got a grade!");
        break;
     case 'E':
        printf("You Failed, try again!");
        break;
     default:
        printf("Enter a valid grade! please");
    }
    return 0;
}