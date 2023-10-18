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

void GameScreen::print(string s) 
{
    cout << s;
}

string GameScreen::enterPlayer()
{
    string s;
    cin >> s;
    return s;
}