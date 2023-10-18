#ifndef VIEW_GAMESCREEN_H
#define VIEW_GAMESCREEN_H

#include <string>

using std::string;

class GameScreen
{
public:
    /// Constructor
    GameScreen() = default;
    
    /// Destructor
    ~GameScreen() = default;

    /// Copy constructor
    GameScreen(const GameScreen&) = delete;

    /// Move constructor 
    GameScreen(GameScreen&&) = delete;

    /// Copy operator
    GameScreen& operator=(const GameScreen&) = delete;

    /// Move operator
    GameScreen& operator=(GameScreen&&) = delete;

    void showStartScreen();
    
    void print(string s);
    string enterPlayer();
};


#endif /* VIEW_GAMESCREEN_H */