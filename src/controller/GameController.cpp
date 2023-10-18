#include <string>
#include <model/HumanPlayer.h>
#include "GameController.h"

using std::string;


GameController::GameController()
    : player1_{nullptr},
      player2_{nullptr}
{
    board_  = new Board();
    screen_ = new GameScreen();
}

GameController::~GameController()
{
    if(player1_) {
        delete player1_;
    }
    
    if(player2_) {
        delete player2_;
    }

    delete screen_;
    delete board_;
}

void GameController::startGame()
{
    screen_->showStartScreen();

    player1_ = new HumanPlayer(screen_->enterPlayerInfo(PLAYER_1_ID), PLAYER_1_ID);
    player2_ = new HumanPlayer(screen_->enterPlayerInfo(PLAYER_2_ID), PLAYER_2_ID);

    screen_->printSection();
    screen_->printPlayerData(player1_);
    screen_->printPlayerData(player2_);
    screen_->printSection();
    screen_->displayBoard(board_->getCellValues());

}