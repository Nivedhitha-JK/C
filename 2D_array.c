#include<stdio.h>

int main(){
    // int numbers[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

    int numbers [3][5];
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);


    printf(" rows: %d\n", rows);
    printf(" columns: %d\n", columns);
// numbers[row size][column size]
    // printf("%d", numbers[1][1]);

numbers[0][0] = 1;
numbers[0][1] = 2;
numbers[0][2] = 3;
numbers[0][3] = 4;
numbers[0][4] = 5;
numbers[1][0] = 6;
numbers[1][1] = 7;
numbers[1][2] = 8;
numbers[1][3] = 9;
numbers[1][4] = 10;
numbers[2][0] = 5;
numbers[2][1] = 4;
numbers[2][2] = 3;
numbers[2][3] = 2;
numbers[2][4] = 1;

// 1st loop - row value
// 2nd loop - column value
// if we sizeof it becomes more flexible to use
for(int i = 0; i < rows; i++){
for(int j = 0; j < columns; j++){
printf("%d ",numbers[i][j]);
}
printf("\n");
}



    return 0;
}