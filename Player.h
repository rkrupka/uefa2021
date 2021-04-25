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
    void basic_stats();

    /*void add_charisma()
    {
        this->base.attack =+ Coach::charisma;
    } */
    void reset_disposition();
    void show_stats()
    {
        cout << "Bazowy atak: " << base.attack << " , zas meczowy atak: " << base.defense << endl;
        cout << "Bazowa obrona: " << base.attack << " , zas meczowa obrona: " << base.defense << endl;
    }

    Player();
};
#endif
