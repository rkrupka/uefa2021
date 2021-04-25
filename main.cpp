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
    srand(time(NULL));
    Team druzyna1, druzyna2;
    for (int i = 0; i < 5; i++)
    {
    cout << "Imie gracza " << i+1 << ": " << druzyna1.player[i].first_name << " ,nazwisko gracza " << i+1 << ": " << druzyna1.player[i].last_name << endl;
    cout << "Statystyka bazowa ataku: " << druzyna1.player[i].base.attack << " , zas meczowa: " << druzyna1.player[i].disposition.attack << endl;
    cout << "Statystyka bazowa obrony: " << druzyna1.player[i].base.defense << " , zas meczowa: " << druzyna1.player[i].disposition.defense << endl;
    cout << "Statystka aktualna ataku: " << druzyna1.player[i].current_stats.attack << endl;
    cout << "Statystka aktualna obrony: " << druzyna1.player[i].current_stats.defense << endl;
    cout << "Druzyna: " << druzyna1.nationality << endl << endl;
    }
        for (int i = 0; i < 5; i++)
    {
    cout << "Imie gracza " << i+1 << ": " << druzyna2.player[i].first_name << " ,nazwisko gracza " << i+1 << ": " << druzyna2.player[i].last_name << endl;
    cout << "Statystyka bazowa ataku: " << druzyna2.player[i].base.attack << " , zas meczowa: " << druzyna2.player[i].disposition.attack << endl;
    cout << "Statystyka bazowa obrony: " << druzyna2.player[i].base.defense << " , zas meczowa: " << druzyna2.player[i].disposition.defense << endl;
    cout << "Statystka aktualna ataku: " << druzyna2.player[i].current_stats.attack << endl;
    cout << "Statystka aktualna obrony: " << druzyna2.player[i].current_stats.defense << endl;
    cout << "Druzyna: " << druzyna2.nationality << endl << endl;
    }
    //cout << "Statystyka bazowa ataku: " << druzyna.player[0].base.attack << " , zas meczowa: " << druzyna.player[0].disposition.attack << endl;


    //trener.nationality = 0;

    return 0;
}


