#ifndef CONTROLLER_GAMECONTROLLER_H
#define CONTROLLER_GAMECONTROLLER_H

#include <model/Board.h>
#include <view/GameScreen.h>

class GameController
{
public:
    /// Constructor
    GameController();

    /// Destructor
    ~GameController();

    /// Copy constructor
    GameController(const GameController&) = delete;

    /// Move constructor 
    GameController(GameController&&) = delete;

    /// Copy operator
    GameController& operator=(const GameController&) = delete;

    /// Move operator
    GameController& operator=(GameController&&) = delete;

    void startGame();
    

private:
    Board*      board_;
    GameScreen* screen_;
};

#endif /* CONTROLLER_GAMECONTROLLER_H */



