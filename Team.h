#ifndef TEAM_H
#define TEAM_H
//////////////////////////////////////////
// Plik: Team.h
//////////////////////////////////////////
#include <iostream>
#include "Player.h"
#include "Coach.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Team// public Player, public Coach
{
  public:
    string nationality;

    Player player[5];

    Coach trener;

    int morale;

    Team();
};
#endif
