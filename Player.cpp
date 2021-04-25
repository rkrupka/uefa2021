//////////////////////////////////////////
// Plik: Player.cpp
//////////////////////////////////////////
#include "Player.h"
#include "Coach.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Player::basic_stats()
{
    int k = ( rand() % 50 ) + 51;
    this->base.attack = k;
    k = ( rand() % 50 ) + 51;
    this->base.defense = k;
}

void Player::reset_disposition()
{
    int k = ( rand() % 21 ) - 10;
    this->disposition.attack = k;
    k = ( rand() % 21 ) - 20;
    this->disposition.defense = k;
}

Player::Player()
{
    basic_stats();
    reset_disposition();
    current_stats.attack = base.attack + disposition.attack;
    current_stats.defense = base.defense + disposition.defense;// + trener.charisma;
}
