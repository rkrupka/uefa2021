//////////////////////////////////////////
// Plik: Player.cpp
//////////////////////////////////////////
#include "Player.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;



Player::Player()
{
    basic_stats();
    reset_disposition();
    current_stats.attack = base.attack + disposition.attack;
    current_stats.defense = base.defense + disposition.defense;
}
