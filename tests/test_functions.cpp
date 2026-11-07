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
