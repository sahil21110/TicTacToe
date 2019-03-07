//
//  TicTacToeState.hpp
//  TicTacToe
//
//  Created by sahil sashi on 3/6/19.
//  Copyright © 2019 sahil sashi. All rights reserved.
//

#ifndef TicTacToeState_h
#define TicTacToeState_h


#endif /* TicTacToeState_h */
#pragma once

#include <string>

enum TicTacToeState {UnreachableState, Xwins, Owins, NoWinner, InvalidInput};

TicTacToeState CheckTicTacToeBoard(std::string board);

