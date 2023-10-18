#ifndef MODEL_HUMANPLAYER_H
#define MODEL_HUMANPLAYER_H

#include <string>
#include "Player.h"

using std::string;

class HumanPlayer : public Player
{
public:
    /// Constructor
    explicit HumanPlayer(string name) 
    : Player {name} {};
    
    /// Destructor
    virtual ~HumanPlayer() = default;

    /// Copy constructor
    HumanPlayer(const HumanPlayer&) = delete;

    /// Move constructor 
    HumanPlayer(HumanPlayer&&) = delete;

    /// Copy operator
    HumanPlayer& operator=(const HumanPlayer&) = delete;

    /// Move operator
    HumanPlayer& operator=(HumanPlayer&&) = delete;

private:
    
};

#endif /* MODEL_HUMANPLAYER_H */