#include <stdio.h>
#include <stdbool.h>

int main(){

    // float W = 1564;
    // bool sunny =true;


    // if( W >= 0 && W <= 30 && sunny){
    //  printf(" The weather is good!");
    // }
    // else{
    //  printf(" The weather is bad!");
    // }

    float T = 24;

    if( T <= 0 || T >= 30){
     printf(" The weather is bad!");
    }
    else{
     printf(" The weather is good! \n");
    }



   bool sunny= false;

   if(!sunny){
      printf("It's cloudy outside!");
   }
   else{
      printf("It's sunny outside!");
   }

    return 0;
}