#include <stdio.h>

int main(){

int rows;
int columns;
char symbol;

printf("Enter rows:");
scanf("%d", &rows);


printf("Enter columns:");
scanf("%d", &columns);


  // Consume the newline character left in the input buffer
    scanf("%*c");

printf("Enter the symbol to print:");
scanf("%c", &symbol);

for(int i = 1; i <= rows; i++)
{
for(int j = 1; j <= columns; j++)
{
// printf("%d", j);
printf("%c", symbol);
}
printf("\n");
}


    return 0;
}