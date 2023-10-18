#ifndef MODEL_BOARD_H
#define MODEL_BOARD_H

#include <string>
#include <vector>

using std::string;
using std::vector;

#define MAXCELLNUM 9

class Board
{
public:
    /// Constructor
    Board();

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

    vector<char> getCellValues();

private:
    vector<char> cellValues_; 
};

#endif /* MODEL_BOARD_H */