#ifndef PLAYER_H
#define PLAYER_H
//////////////////////////////////////////
// Plik: Player.h
//////////////////////////////////////////
#include <iostream>
#include "Person.h"
#include <cstdlib>
#include <ctime>

using namespace std;

struct Stats
{
    int attack;
    int defense;
};

class Player : public Person
{
  public:
    Stats base;
    Stats disposition;
    Stats current_stats;
    void basic_stats()
    {
        srand(time(NULL));
        int k = ( rand() % 50 ) + 51;
        for (int i = 0; i < 500000; i++)
        base.attack = k;
        for (int i = 0; i < 500000; i++)
        k = ( rand() % 50 ) + 51;
        base.defense = k;
    }
    /*void add_charisma()
    {
        this->base.attack =+ Coach::charisma;
    } */
    void reset_disposition()
    {
        srand(time(NULL));
        int k = ( rand() % 16 ) - 10;
        for (int i = 0; i < 500000; i++)
        disposition.attack = k;
        for (int i = 0; i < 500000; i++)
        k = ( rand() % 16 ) - 10;
        disposition.defense = 5;
    };

    Player();
};
#endif
