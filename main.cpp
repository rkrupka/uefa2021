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
    Team druzyna;
    for (int i = 0; i < 5; i++)
    {
    cout << "Imie gracza " << i+1 << ": " << druzyna.playing[i].first_name << " ,nazwisko gracza " << i+1 << ": " << druzyna.playing[i].last_name << endl;
    cout << "Statystyka bazowa ataku: " << druzyna.playing[i].base.attack << " , zas meczowa: " << druzyna.playing[i].disposition.attack << endl;
    cout << "Statystyka bazowa obrony: " << druzyna.playing[i].base.defense << " , zas meczowa: " << druzyna.playing[i].disposition.defense << endl;
    cout << "Statystka aktualna ataku: " << druzyna.playing[i].current_stats.attack << endl;
    cout << "Statystka aktualna oborny: " << druzyna.playing[i].current_stats.defense << endl;
    cout << "Druzyna: " << druzyna.nationality << endl << endl;
    }

    //trener.nationality = 0;

    return 0;
}


