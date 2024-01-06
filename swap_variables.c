#include <stdio.h>
#include <string.h>
int main(){

    int a;
    int b;
    int temp;
    printf("Enter A value:");
    scanf("%d", &a);
    printf("Enter B value:");
    scanf("%d", &b);
    temp = a;
    a = b;
    b =temp;
    printf("A value is %d and B value is %d \n",a, b);


    // char x[15] = "water";
    // char y[] = "lemonade";
    // char y[15] = "soda";
    char x[15];
    char y[15];
    char tempi[15];

    // temp = x;
    // x = y;
    // y = temp;
  
  printf("Enter a string for X:");
  scanf("%s", &x);
  printf("Enter a string for Y:");
  scanf("%s", &y);

  strcpy(tempi , x);
  strcpy(x , y);
  strcpy(y , tempi);

    printf("X value is %s and Y value is %s", x, y);


    return 0;
}