#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "Brother";
    char string2[] = "VRO";
    // char string1[] = "Crocode";
    // char string2[] = "Code";



    // strlwr(string1);                               // converts a string to lowercase
    // strupr(string1);                               // converts a string to uppercase
    // strcat(string1, string2);                      // appends string2 to the end of the string1
    // strncat(string1, string2,3);                   // append n characters from string2 to string1
    // strcpy(string1, string2);                      // copy string2 to string1
    // strncpy(string1, string2, 3);                     //copy n characters of string1 to string2
    // strncpy(string2, string1, 3);
    // printf("%s",string2);

    //strset(string1,'*');                               // set all characters of a string to a given character
    //strnset(string2,'v', 1);                    // set first n characters of a string to a given character
    

    // strrev(string1);                             // reverses a string








    // integer string functions

    // int result = strlen(string1);
    //int result = strcmp(string1,string2);                  //string compare all characters
    //int result = strncmp(string1,string2,1);                  //string compare n character
    
    // int result = strcmpi(string1, string2);                // string compare all characters (ignore case)
    int result = strnicmp(string1, string2,2);                // string compare n characters (ignore case)
    
    // printf("%s",string1);
    // printf("%d",result);


    if(result == 0){
      printf("The given strings are same");
    }
    else{
      printf("The given strings are NOT same");
    }
    return 0;
}