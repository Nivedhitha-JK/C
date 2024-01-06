#include <stdio.h>


enum Days {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5, Fri = 6, Sat = 7};

int main()
{
    enum Days today = Mon;
    //  printf("%d",today);

    // if(today == 1 || today == 2)
    if(today == Sun || today == Sat)
    {
     printf("\n It's a Weekend guyzzz....get peace");
    }
    else
    {
        printf("I have to Work today bruh! WooWooh!");
    }
    return 0;
}