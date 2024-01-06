#include <stdio.h>
#include <string.h>

int main(){

char name[25];

printf("What's your name ? ");
// scanf("%s",name);
fgets(name, 25, stdin);
name[strlen(name)- 1] = '\0';

while(strlen(name) == 0){
printf("What's your name ? ");
// scanf("%s",name);
fgets(name, 25, stdin);
name[strlen(name)- 1] = '\0';
}



printf("Hello %s",name);


    return 0;
}

// while loop - repeats a set of code for unlimited times when the condition gets true
// a while loop might not execute at all 