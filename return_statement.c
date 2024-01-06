#include <stdio.h>

double square(double X){
    // double result = X * X;
    return X * X;
}

int maximum(int x, int y){

    return (x > y) ? x : y ;
}


int main(){

    double Y = square(3.14);
    printf("%lf \n", Y);

    int max = maximum(9, 7);
    printf("%d", max);
    return 0;
}