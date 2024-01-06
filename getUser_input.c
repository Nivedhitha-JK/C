#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    
    int age;
    char name[25];

    printf("\n what's your name ?");
    // scanf("%s",&name);
    fgets(name, 25 , stdin);
    name[strlen(name)-1]='\0';

    printf("\n how old are you ?");
    scanf("%d",&age);


    printf("\n Hello %s, How are you ?",name);
    printf("\n you are %d years old", age);


    return 0;
}