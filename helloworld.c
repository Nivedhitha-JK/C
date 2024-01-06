#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("Hello World! \n");
    printf("Hello Happy World! \n");
    printf("Hello Happy World! \n");
    printf("\'I like flowers\' \n");





    int x; // declaration
    x=5; // initialization
    int y = 10; // declaration + initialization

    int age= 21; // integer
    float gpa = 8.123456789012354665; // floating point numbers
    char grade = 'B'; // store single characters
    char name[] ="Lilly"; // To store sequence of characters

    printf("Hello %s \n",name);
    printf("You are %d years old \n",age);
    printf("your grade is %c \n",grade);
    printf("Your gpa is %.15f \n",gpa);
  


    double dNum=3.123456789012345;
    bool e =true;
    bool f =false;

    char m=100; // signed char - 1 byte (-128 to +127) %d or %c
    unsigned char g = 256; // unsigned char - 1 byte (0 to +255) %d or %c

    short int h= -32768; // short int - 2 bytes (-32,768 to 32,767) %d
    unsigned short int i = 65535; // unsigned short int - 2bytes (0 to 65,535) %d

    int t=2147483647; // int 4bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int u=4294967295; // unsigned int - 4 bytes (0 to +4,294,967,295) %u

    long long int lNum=987326562175671;
    unsigned long long int lUnum=1867576340394233985246;
    printf("double data type is %.15lf \n",dNum);
    printf("Boolean values is %d \n",e);
    printf("Boolean values is %d \n",f);
    printf("signed char is %d \n",m);
    printf("signed char is %c \n",m);
    printf("unsigned char is %d \n",g);
    printf("unsigned char is %c \n",g);
    printf("short int is %d \n",h);
    printf("unsigned short int is %d \n",i);
    printf("int is %d \n",t);
    printf("unsigned int is %u \n",u);
    printf("long long int is %lld \n",lNum);
    printf("unsigned long long int is %llu \n",lUnum);


    long long int k;
    k=sizeof(long long int);
    printf("k value is %lld \n",k);

    return 0;
}