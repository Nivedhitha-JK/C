#include<stdio.h>

void birthday(char X[], int Y){
    printf("Happy Birthday to %s...\n", X);
    printf("You are %d years old...\n", Y);
    // printf("Happy Birthday to you...\n");
    // printf("Happy Birthday to DEAR you...\n");
    // printf("May god bless you DEAR...\n");
}


int main(){

    // char name[]="Lilly";
    // int age= 21;

    char name[25];
    int age;

    printf("What's your name ?");
    scanf("%s", &name);
    printf("how old are you?\n");
    scanf("%d", &age);

    birthday(name, age);
    // birthday();
    // birthday();
    return 0;
}