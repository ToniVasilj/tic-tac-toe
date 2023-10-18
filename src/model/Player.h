#ifndef MODEL_PLAYER_H
#define MODEL_PLAYER_H

#include <string>

using std::string;

class Player
{
public:
    /// Constructor
    explicit Player(string name) 
    : name_ {name} {};
    
    /// Destructor
    virtual ~Player() = default;

    /// Copy constructor
    Player(const Player&) = delete;

    /// Move constructor 
    Player(Player&&) = delete;

    /// Copy operator
    Player& operator=(const Player&) = delete;

    /// Move operator
    Player& operator=(Player&&) = delete;

    string getName();

private:
    string name_;
};

#endif /* MODEL_PLAYER_H */