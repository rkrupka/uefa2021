#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Person.h"
#include "Player.h"
#include "Coach.h"
#include "Team.h"

using namespace std;

int main()
{
    srand(time(NULL));
    Team druzyna[16];

    for (int j = 0; j < 16; j++)
    {
        cout << "Imie trenera: " << druzyna[j].trener.first_name << " ,nazwisko trenera: " << druzyna[j].trener.last_name << endl;
        cout << "Charyzma trenera: " << druzyna[j].trener.charisma << endl;

        for (int i = 0; i < 5; i++)
        {
        cout << "Imie gracza " << i+1 << ": " << druzyna[j].player[i].first_name << " ,nazwisko gracza " << i+1 << ": " << druzyna[j].player[i].last_name << endl;
        cout << "Statystyka bazowa ataku: " << druzyna[j].player[i].base.attack << " , zas meczowa: " << druzyna[j].player[i].disposition.attack << endl;
        cout << "Statystyka bazowa obrony: " << druzyna[j].player[i].base.defense << " , zas meczowa: " << druzyna[j].player[i].disposition.defense << endl;
        cout << "Statystka aktualna ataku: " << druzyna[j].player[i].current_stats.attack << endl;
        cout << "Statystka aktualna obrony: " << druzyna[j].player[i].current_stats.defense << endl;
        cout << "Druzyna: " << druzyna[j].nationality << endl << endl;
        }
    }
    //cout << "Statystyka bazowa ataku: " << druzyna.player[0].base.attack << " , zas meczowa: " << druzyna.player[0].disposition.attack << endl;


    //trener.nationality = 0;

    return 0;
}


