//
//  main.cpp
//  TicTacToe
//
//  Created by sahil sashi on 3/6/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#include <iostream>
#include "TicTacToeState.hpp"
class TicToe {
    public:
            TicTacToeState static CheckTicTacToeBoard(std::string boardState) {
                // implement your code here
                
                std::string tictac_string = boardState;
                if (tictac_string.length() != 9) {
                    return TicTacToeState::InvalidInput;
                }
                for (int i = 0; i < tictac_string.size(); i++) {
                    tictac_string[i] = toupper(tictac_string[i]);
                }
                
                bool X_win = false;
                bool O_win = false;
                // invalid input if the string length is greater than 9.
                if (CheckForHoriWinner('X', tictac_string)) {
                    X_win = true;
                }
                if (CheckForHoriWinner('O', tictac_string)) {
                    O_win = true;
                }
                if (CheckForVertiWinner('X', tictac_string)) {
                    X_win = true;
                }
                if (CheckForVertiWinner('O', tictac_string)) {
                    O_win = true;
                }
                    
                
    
                //to check the no. of X's and O's
                int num_of_Os = 0;
                int num_of_Xs = 0;
                
                
                
                for (int i = 0; i < boardState.size(); i++) {
                    if (boardState[i] == 'X') {
                        num_of_Xs++;
                    }
                    if (boardState[i] == 'O') {
                        num_of_Os++;
                    }
                    
                }
    
    // code to check if the current state is unreachable.
    if (( num_of_Xs- num_of_Os > 1 || num_of_Os - num_of_Xs < 0) ) {
        return TicTacToeState::UnreachableState;
        
    }
    if (num_of_Xs == num_of_Os && X_win ) {
        return TicTacToeState::UnreachableState;
        
    }
    if (num_of_Xs > num_of_Os && O_win ) {
        return TicTacToeState::UnreachableState;
        
    }
    if (O_win && X_win) {
        return TicTacToeState::UnreachableState;
        
    }
    
    // CODE TO CHECK THE WINNER AND IF THERE IS NO WINNER.
    
    if (X_win) {
        return TicTacToeState::Xwins;
    } else if (O_win) {
        return TicTacToeState::Owins;
    } else {
        return  TicTacToeState::NoWinner;
    }
    
    
   }
    
    
    public:
    bool static CheckForHoriWinner(char ch, std::string input_string) {
        for (int i = 0; i < input_string.size(); i+=3) {
            if ((input_string[i] == 'ch') && (input_string[i + 1] == 'ch') &&(input_string[i + 2] == 'ch')) {
                return true ;
            }
        }
        return false;
    }
public:
    bool static CheckForVertiWinner(char ch, std::string input_string) {
        for (int i = 0; i < input_string.size(); i++) {
            if ((input_string[i] == 'ch') && (input_string[i + 3] == 'ch') &&(input_string[i + 6] == 'ch')) {
                return true ;
            }
        }
        return false;
    }
    
};



