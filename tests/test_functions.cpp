#include <gtest/gtest.h>
extern "C"{
    #include "../functions.h"
}

TEST(RPSTests, BothPlayersRock){
    char result[8] = {0};
    getWinner("Rock", "Rock", result);
    EXPECT_STREQ("Draw", result);
}