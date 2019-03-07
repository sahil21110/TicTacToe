//
//  TicTacToeTests.cpp
//  TicTacToe
//
//  Created by sahil sashi on 3/6/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//
#define CATCH_CONFIG_MAIN
#include "TicTacToeTests.hpp"
#include "catch.hpp"
#include "TicTacToeState.hpp"
#include "main.cpp"
#include <iostream>


TEST_CASE("To check for null") {
    std::string boards_null;
    REQUIRE(CheckTicTacToeBoard(boards_null) == TicTacToeState::InvalidInput);
}

TEST_CASE("O Wins Horizontal") {
    std::string boards_null;
    REQUIRE(CheckTicTacToeBoard("X.X.X.OOO") == TicTacToeState::Owins);
    REQUIRE(CheckTicTacToeBoard("OOO.X.X.X") == TicTacToeState::Owins);
}

TEST_CASE("O Wins VERTICAL") {
    std::string boards_null;
    REQUIRE(CheckTicTacToeBoard("OX.O.XO.X") == TicTacToeState::Owins);
    
}

TEST_CASE("O wins Diagonal") {
    std::string boards_null;
    REQUIRE(CheckTicTacToeBoard("XXO.O.O.X") == TicTacToeState::Owins);
}

TEST_CASE("X wins diagonal") {
    std::string boards_null;
    REQUIRE(CheckTicTacToeBoard("O.X.X.X.O") == TicTacToeState::Xwins);
}


TEST_CASE("X wins horizontal") {
    std::string boards_null;
    REQUIRE(CheckTicTacToeBoard("O...O.XXX") == TicTacToeState::Xwins);
    REQUIRE(CheckTicTacToeBoard("...O.OXXX") == TicTacToeState::Xwins);
}

TEST_CASE("X wins vertical") {
    std::string boards_null;
    REQUIRE(CheckTicTacToeBoard("XO.X..XO.") == TicTacToeState::Xwins);
}

TEST_CASE("No winner") {
    std::string boards_null;
    REQUIRE(CheckTicTacToeBoard("O...X.X..") == TicTacToeState::NoWinner);
}

TEST_CASE("Invalid Input when string length is bigger") {
    std::string boards_null;
    REQUIRE(CheckTicTacToeBoard("XOOO.OXXXXX") == TicTacToeState::InvalidInput);
}

TEST_CASE("Unreachable state because of o's being greater") {
    std::string boards_null;
    REQUIRE(CheckTicTacToeBoard("XOOO.OXX") == TicTacToeState::UnreachableState);
}



