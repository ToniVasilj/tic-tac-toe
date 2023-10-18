#ifndef MODEL_BOARD_H
#define MODEL_BOARD_H

#include <string>

using std::string;

class Board
{
public:
    /// Constructor
    Board() = default;
    
    /// Destructor
    ~Board() = default;

    /// Copy constructor
    Board(const Board&) = delete;

    /// Move constructor 
    Board(Board&&) = delete;

    /// Copy operator
    Board& operator=(const Board&) = delete;

    /// Move operator
    Board& operator=(Board&&) = delete;


    void storePlayer(string s);
    string getPlayer();

private:
    string player_;
};

#endif /* MODEL_BOARD_H */