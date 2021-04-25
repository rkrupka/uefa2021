//////////////////////////////////////////
// Plik: Coach.cpp
//////////////////////////////////////////
#include "Coach.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Coach::Coach()
{
    srand( time( NULL ) );
    int charisma =( rand() % 6 );

    cout << "Charisma = " << charisma << endl;
}
