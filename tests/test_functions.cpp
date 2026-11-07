#include <gtest/gtest.h>
extern "C"{
    #include "../functions.h"
}

TEST(RPSTests, BothPlayersRock){
    char result[8] = {0};
    getWinner("Rock", "Rock", result);
    EXPECT_STREQ("Draw", result);
}

TEST(RPSTests, RockBeatsScissors) {
    char result[8] = {0};

    getWinner("Rock", "Scissors", result);

    EXPECT_STREQ("Player1", result);
}

TEST(RPSTests, PaperBeatsRock) {
    char result[8] = {0};

    getWinner("Paper", "Rock", result);

    EXPECT_STREQ("Player1", result);
}


TEST(RPSTests, ScissorsBeatsPaper) {
    char result[8] = {0};

    getWinner("Scissors", "Paper", result);

    EXPECT_STREQ("Player1", result);
}


TEST(RPSTests, Player2PaperBeatsRock) {
    char result[8] = {0};

    getWinner("Rock", "Paper", result);

    EXPECT_STREQ("Player2", result);
}


TEST(RPSTests, Player2RockBeatsScissors) {
    char result[8] = {0};

    getWinner("Scissors", "Rock", result);

    EXPECT_STREQ("Player2", result);
}

TEST(RPSTests, Player2ScissorsBeatsPaper) {
    char result[8] = {0};

    getWinner("Paper", "Scissors", result);

    EXPECT_STREQ("Player2", result);
}

TEST(RPSTests, BothPlayersPaper) {
    char result[8] = {0};

    getWinner("Paper", "Paper", result);

    EXPECT_STREQ("Draw", result);
}

TEST(RPSTests, BothPlayersScissors) {
    char result[8] = {0};

    getWinner("Scissors", "Scissors", result);

    EXPECT_STREQ("Draw", result);
}

TEST(RPSTests, InvalidPlayer1) {
    char result[8] = {0};

    getWinner("Banana", "Rock", result);

    EXPECT_STREQ("Invalid", result);
}
