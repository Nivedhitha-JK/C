#include <stdio.h>

int main(){

// while loop - checks the condition once, THEN execute a block of code, if a condition is true.
// Do while loop - always execute a block of code once, THEN checks a condition.


int number = 0;
int sum = 0;


do{
printf("Enter a Number above 0:");
scanf("%d", &number);

if(number > 0){
sum += number;
}
}while(number > 0);
printf("The sum of the number is %d", sum);







    return 0;
}