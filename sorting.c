#include <stdio.h>

void sortArray(int array[], int size)
{
for(int i = 0; i < size; i++)
{
printf("Outer loop: %d \n",i);
for(int j = 0; j < size - i -1; j++)
{
printf("Inner loop: %d \n",j);
printf("Comparing %d and %d elements : %d > %d ? \n ",j ,j+1 ,array[j] ,array[j+1]);
if(array[j] > array[j+1])
{
int temp = array[j];
array[j] = array[j+1];
array[j+1] = temp;

printf("Swapped %d and %d\n",array[j+1] ,array[j]);
}
else{
    printf("No Swap Needed \n");
}
}


// Print the array after each pass
printf("After Each pass %d :",i + 1);
for(int k = 0; k < size; k++)
{ 
    printf("%d ",array[k]);
}
printf("\n");
}
}


void printArray(int array[], int size)
{
for(int i = 0; i < size; i++)
{
printf("%d ",array[i]);
}
}
int main()
{
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Array Size : %d", size);
    sortArray(array,size);
}