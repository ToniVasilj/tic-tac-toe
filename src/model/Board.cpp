#include "Board.h"

void Board::storePlayer(string s)
{
    player_ = s;
}

string Board::getPlayer() 
{
    return player_;
}