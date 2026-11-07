#include <stdio.h>
#include <string.h>
#include "functions.h"



void getWinner(const char player1[],
               const char player2[],
               char result[8]) {
    
if (strcmp(player1, "Rock") != 0 &&
    strcmp(player1, "Paper") != 0 &&
    strcmp(player1, "Scissors") != 0) {

    strcpy(result, "Invalid");
    return;
}

if (strcmp(player2, "Rock") != 0 &&
    strcmp(player2, "Paper") != 0 &&
    strcmp(player2, "Scissors") != 0) {

    strcpy(result, "Invalid");
    return;
}


    if ((strcmp(player1, "Rock") == 0 &&
         strcmp(player2, "Scissors") == 0) ||

        (strcmp(player1, "Paper") == 0 &&
         strcmp(player2, "Rock") == 0) ||

        (strcmp(player1, "Scissors") == 0 &&
         strcmp(player2, "Paper") == 0)) {

        strcpy(result, "Player1");
    }
   
    
    else if ((strcmp(player1, "Rock") == 0 &&
          strcmp(player2, "Paper") == 0) ||

         (strcmp(player1, "Scissors") == 0 &&
          strcmp(player2, "Rock") == 0) ||

         (strcmp(player1, "Paper") == 0 &&
          strcmp(player2, "Scissors") == 0)) {

    strcpy(result, "Player2");
}


    else {
        strcpy(result, "Draw");
    }
}

