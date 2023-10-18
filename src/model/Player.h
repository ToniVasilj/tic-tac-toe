#ifndef MODEL_PLAYER_H
#define MODEL_PLAYER_H

#include <string>

using std::string;

class Player
{
public:
    /// Constructor
    explicit Player(string name, int id) 
    : name_ {name},
      id_ {id}
    {};
    
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
    int getId();

private:
    string name_;
    int    id_;
};

#endif /* MODEL_PLAYER_H */