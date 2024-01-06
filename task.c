#include <stdio.h>

void sortArray(char array[], int size)
{
    for (int i = 0; i < size; i++) // Outer loop (i)
    {
        printf("Outer Loop: i = %d\n", i);

        for (int j = 0; j < size - i - 1; j++) // Inner loop (j)
        {
            printf("  Inner Loop: j = %d\n", j);
            printf("%d",size -  i - 1);
            
            printf("    Comparing elements at indices %d and %d: %d > %d?\n", j, j + 1, array[j], array[j + 1]);

            if (array[j] > array[j + 1]) // Compare adjacent elements
            {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                printf("      Swapped: %d and %d\n", array[j + 1], array[j]);
            }
            else
            {
                printf("      No swap needed\n");
            }
        // Print the array after each pass
        printf("After Pass %d: ", i + 1);
        for (int k = 0; k < size; k++) {
            printf("%d ", array[k]);
            // printf("Size :%d ", size);
        }
        printf("\n");

        }

    }
}




void printArray(char array[], int size)
{
for(int i = 0;i < size; i++)
{
printf("%c ", array[i]);
}
}



int main()
{
    // int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    // int array[] = {10,90,40,20,60,50,70};
    char array[] = {'F','A','Z','L','C','N'};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array Size: %d\n", size);

    sortArray(array, size);
    printArray(array, size);
    return 0;
}