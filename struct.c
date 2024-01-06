#include <stdio.h>

struct player
{
    char name[12];
    int score;
};

int main()
{
    struct player player1;
    struct player player2;

    strcpy(player1.name, "Lilly");
    player1.score = 9;

    strcpy(player2.name, "Charlie");
    player2.score = 10;

    printf("%s\n",player1.name);
    printf("%d\n",player1.score);

    printf("%s\n",player2.name);
    printf("%d\n",player2.score);
    return 0;
}