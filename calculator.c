#include <stdio.h>

int main(){
    
    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter the Operator ( + - * /) : \n");
    scanf("%c", &operator);

    printf("Enter the num 1: ");
    scanf("%lf",&num1);

    printf("Enter the num 2: ");
    scanf("%lf",&num2);


   switch (operator)
   {
    case '+':
     printf("you chose Addition!");
     result = num1 + num2;
     printf("%lf",result);
     break;
    case '-':
     printf("you chose Subtraction!");
     result = num1 - num2;
     printf("%lf",result);
     break;
    case '*':
     printf("you chose Multiplication!");
     result = num1 * num2;
     printf("%lf",result);
     break;
    case '/':
     printf("you chose Division!");
     result = num1 / num2;
     printf("%lf",result);
     break;
    default:
     printf("%c is not a valid operator!!", operator);
   }


    return 0;
}