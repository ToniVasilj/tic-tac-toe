#include <string>
#include "GameController.h"

using std::string;

GameController::GameController()
{
    board_  = new Board();
    screen_ = new GameScreen();
}

GameController::~GameController()
{
    delete screen_;
    delete board_;
}

void GameController::startGame() 
{
    screen_->showStartScreen();
}