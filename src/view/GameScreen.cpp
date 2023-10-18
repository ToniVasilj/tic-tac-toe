#include <iostream>
#include "GameScreen.h"

using std::cout;
using std::cin;
using std::endl;

void GameScreen::showStartScreen()
{
    cout << "=========================" << endl;
    cout << "==== TIC - TAC - TOE ====" << endl;
    cout << "=========================" << endl;
}

string GameScreen::enterPlayerInfo(int id)
{
    string name{};

    cout << "Enter player " << id << " name: ";
    getline(cin, name);

    return name;
}

void GameScreen::printPlayerData(Player *player)
{
    cout << "Player " << player->getId() <<" data:\n";
    cout << "  name: " << player->getName() << endl;
}

void GameScreen::printSection() 
{
    cout << "=========================" << endl;
}

void GameScreen::displayBoard(vector<char> cellValues)
{
    cout<<"\t     |     |     \n";
    cout<<"\t  "<<cellValues.at(0)<<"  |  "<<cellValues.at(1)<<"  |  "<<cellValues.at(2)<<" \n";
    cout<<"\t_____|_____|_____\n";
    cout<<"\t     |     |     \n";
    cout<<"\t  "<<cellValues.at(3)<<"  |  "<<cellValues.at(4)<<"  |  "<<cellValues.at(5)<<" \n";
    cout<<"\t_____|_____|_____\n";
    cout<<"\t     |     |     \n";
    cout<<"\t  "<<cellValues.at(6)<<"  |  "<<cellValues.at(7)<<"  |  "<<cellValues.at(8)<<" \n";
    cout<<"\t     |     |     \n";
}