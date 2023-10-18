#ifndef VIEW_GAMESCREEN_H
#define VIEW_GAMESCREEN_H

#include <string>
#include <vector>
#include <model/Player.h>

using std::string;
using std::vector;

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
    string enterPlayerInfo(int id);
    void printPlayerData(Player *player);
    void printSection();
    void displayBoard(vector<char> cellValues);
};


#endif /* VIEW_GAMESCREEN_H */