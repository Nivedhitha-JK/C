#include <stdio.h>

int main(){
    
   for(int i = 1; i <= 20; i++){
    
    if(i == 9){
      continue; // skips the code and still continue the loop
      //break; // exit the loop
    }

      printf("%d \n",i);
   }


    return 0;
}