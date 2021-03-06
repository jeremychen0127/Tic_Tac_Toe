#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include "game.h"

namespace tictactoe {

  class BoardView;
  class Player;

  class GameController {
    Game *game;
    BoardView *view;
    Symbol turn;
    Player *playerX;
    Player *playerO;

    public:
      GameController();

      // Updates the square view
      // Intended to be called by Game
      void updateSquareView(Square square, Symbol symbol);

      // Clears the board view
      // Intended to be called by Game
      void clearBoardView();

      // Starts the game
      void play();
  };
}

#endif
