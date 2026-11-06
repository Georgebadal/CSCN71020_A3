#include <gtest/gtest.h>
extern "C"{
    #include "../functions.h"
}

TEST(RPSTests, BothPlayersRock){
    char result[8] = {0};
    getWinner("rock", "rock", result);
    EXPECT_STREQ("Draw", result);
}