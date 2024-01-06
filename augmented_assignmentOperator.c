#include <stdio.h>
#include <math.h>

int main(){
    int x=10;
 
//  x = x + 1;
//  x += 1;

// x = x - 1;
// x -= 1;

// x = x * 4;
// x *= 4;

// x = x / 2;
// x /= 2;

// x = x % 2;
x %=2;


// printf("X is %d",x);
double A = sqrt(9);
double B = pow(2,4);
int C = floor(7.148); // rounded value
int D = ceil(4.14); // round up
int E = round(5.14); // round down
double F = fabs(-9897); // turn negative to positive num vice versa
double G = log(5);
double H = sin(20);
double I = cos(20);
double J = tan(20);


printf("%lf \n" , A);
printf("%lf \n" , B);
printf("%d \n" , C);
printf("%d \n" , D);
printf("%d \n" , E);
printf("%lf \n" , F);
printf("%lf \n" , G);
printf("%lf \n" , H);
printf("%lf \n" , I);
printf("%lf \n" , J);



    return 0;
}