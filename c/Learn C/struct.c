#include <stdio.h>
#include <string.h>

struct Players
{
    /* data */
    char name[12];
    int score;
};

int main()
{
    struct Players player1;
    struct Players player2;

    strcpy(player1.name, "lim");
    player1.score = 10;

    strcpy(player2.name, "sam");
    player2.score = 5;

    printf("%s %d \n", player1.name, player1.score);
    printf("%s %d \n", player2.name, player2.score);
    return 0;
}