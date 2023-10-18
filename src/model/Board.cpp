#include "Board.h"

Board::Board()
{
    for (int i = 0; i < MAXCELLNUM; ++i)
        cellValues_.push_back(49+i);
}

vector<char> Board::getCellValues()
{
    return cellValues_;
}