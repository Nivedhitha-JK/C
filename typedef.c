#include <stdio.h>
// struct User
// {
// char name[25];
// char password[12];
// int id;
// };


typedef struct 
{
char name[25];
char password[12];
int id;
} User;
int main()
{
    User user1 = {"Lilly" , "90080070011", 7};
    User user2 = {"Charlie" , "60050040012", 8};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);

    printf("\n");

    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    return 0;
}