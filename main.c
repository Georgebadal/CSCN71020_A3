
#include <stdio.h>
#include "functions.h"

int main() {
    char player1[50];
    char player2[50];
    char result[8];

    printf("Enter Player 1 choice: ");
    scanf("%49s", player1);

    printf("Enter Player 2 choice: ");
    scanf("%49s", player2);

    getWinner(player1, player2, result);

    printf("Result: %s\n", result);

    return 0;
}
