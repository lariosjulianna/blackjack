/*
Full name : Julianna Larios
Student ID : 2431409
Chapman email : jlarios@chapman.edu
Assignment: Open Source Assignment for SE320 
*/
//#include <gtest/gtest.h>
#include "blackjack.project/main"


#include "Simulation.h"

TEST(SimulationTest, GameStartsWhenPlayerKnowsHowToPlay) {
    Simulation simulation;
    simulation.startGame();
    EXPECT_TRUE(simulation.gameInPlay());
}

TEST(SimulationTest, GameStartsWhenPlayerNeedsInstructionsAndAgrees) {
    Simulation simulation;

    simulation.startGame();
    EXPECT_TRUE(simulation.gameInPlay());
}


// chatgpt helped with test

// Include the header file of the code you want to test

// Define your test cases
TEST(MainTest, Test1) {
    // Test code goes here
    EXPECT_EQ(2, add(1, 1));
}