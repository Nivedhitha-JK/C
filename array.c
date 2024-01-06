#include <stdio.h>

int main(){

    double prices[] = {5.00, 10.00, 15.00, 20.00, 25.00, 30.00};

// sizeof(prices) - gives the total array size in bytes
// sizeof(prices[0]) - gives the size of one element in the array
// in order to get the all values you must divide the total size by the size of each element


printf("%d bytes\n", sizeof(prices));

for(int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++ ){
    printf(" $ %.2lf \n", prices[i]);
}



    return 0;
}