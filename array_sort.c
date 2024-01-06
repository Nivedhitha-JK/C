#include <stdio.h>
                                   // Bubble sort
void sort(int array[], int size)
{

for(int i = 0; i < size - 1; i++)
{        // i = 0; 0 < 8; 9
for(int j = 0; j < size - i - 1; j++)   // j = 0; 0 < 9 - 0 - 1 = 8;
{
if(array[j] > array[j+1])               // 9 > 1, 9 > 8
{
int temp = array[j];                    // temp = 9 temp = 9
array[j] = array[j+1];                  // 9 = 1  9 = 8
array[j+1] = temp;                      // 1 = 9  8 = 9
}                                       // {1,9,8,2,7,3,6,4,5} j=1
                                        // {1,8,9,2,7,3,6,4,5} j=2

        // Print the array after each pass
        printf("After Pass %d: ", i + 1);
        for (int k = 0; k < size; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");
}                                 
}
}



void printArray(int array[], int size)
{
for(int i = 0; i < size; i++)
{
printf("%d ", array[i]); 
}
}


int main(){

    // int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int array[] = {8,9,2,5,3,4,7};
    // int array[] = {11,18,16,14,12,17,13,15,19};
    int size = sizeof(array)/ sizeof(array[0]);

    // printf("Array size %d", size);
     sort(array, size);
     printArray(array, size);
    return 0;
}