#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Formation.h"
#include "Overall.h"
#include "Person.h"
#include "Player.h"
#include "Coach.h"
#include "Team.h"

using namespace std;

int main()
{
    Player gracz;
    cout << "Imie gracza 1: " << gracz.first_name << " ,nazwisko gracza 1: " << gracz.last_name << endl;
    int dalej = 1;
    while (dalej)
    {
        Coach trener;
        cin >> dalej;
    }
    //trener.nationality = 0;

    return 0;
}


