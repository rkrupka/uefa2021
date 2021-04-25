#ifndef COACH_H
#define COACH_H
//////////////////////////////////////////
// Plik: Coach.h
//////////////////////////////////////////
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Person.h"
#include "Player.h"
using namespace std;

class Coach : public Person
{
  public:
    int charisma;
    Coach();
};
#endif

