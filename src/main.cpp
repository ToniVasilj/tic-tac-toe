#include <iostream>
#include "GameController.h"



int main()
{
    GameController *controller = new GameController();
    controller->startGame();


    delete controller;
    return 0;
}
