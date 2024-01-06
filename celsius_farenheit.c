#include <stdio.h>
// #include <ctype.h>

int main(){
    
   char unit;
   float temp;

   printf("Enter unit:");
   scanf("%c",&unit);

   unit= toupper(unit);

   if( unit == 'C'){
    printf("In celsius \n");

    printf("Enter the temp in celsius:\n");
    scanf("%f",&temp);
    temp = (temp * 9 / 5) + 32;
    printf("\n The temp in Farenheit is %.1f", temp);
   }
   else if( unit == 'F'){
    printf("In farenheit \n");
    printf("Enter the temp in farenheit: ");
    scanf("%f", &temp);
    temp =((temp - 32) * 5) / 9;
    printf("\n The temp in Celsius is %.1f", temp);
    
   }
   else{
    printf("enter valid data!");
   }



    return 0;
}