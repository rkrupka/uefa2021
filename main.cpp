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
    int dalej = 1;
    while (dalej)
    {
    srand(time(NULL));
    Team druzyna[16];
    int score_team1 = 0;
    int score_team2 = 0;
    double tmp_att[2] = {0, 0};
    double tmp_def[2] = {0, 0};
    double avg_att[2] = {0, 0};
    double avg_def[2] = {0, 0};

    /*for (int j = 0; j < 16; j++)
    {
        cout << "/////////////////////////////////////////////////////////////////////" << endl;
        cout << "Imie trenera: " << druzyna[j].trener.first_name << " ,nazwisko trenera: " << druzyna[j].trener.last_name << endl;
        cout << "Charyzma trenera: " << druzyna[j].trener.charisma << endl;

        for (int i = 0; i < 5; i++)
        {
        cout << "Imie gracza " << i+1 << ": " << druzyna[j].player[i].first_name << " ,nazwisko gracza " << i+1 << ": " << druzyna[j].player[i].last_name << endl;
        cout << "Statystyka bazowa ataku: " << druzyna[j].player[i].base.attack << " , zas meczowa: " << druzyna[j].player[i].disposition.attack << endl;
        cout << "Statystyka bazowa obrony: " << druzyna[j].player[i].base.defense << " , zas meczowa: " << druzyna[j].player[i].disposition.defense << endl;
        cout << "Statystka aktualna ataku: " << druzyna[j].player[i].current_stats.attack << endl;
        cout << "Statystka aktualna obrony: " << druzyna[j].player[i].current_stats.defense << endl;
        cout << "Druzyna: " << druzyna[j].nationality << endl;
        }
    }*/

    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            tmp_att[j] = tmp_att[j] + druzyna[j].player[i].current_stats.attack;
            tmp_def[j] = tmp_def[j] + druzyna[j].player[i].current_stats.defense;
        }
        cout << tmp_att[j] << endl;
        cout << tmp_def[j] << endl;
        avg_att[j] = (tmp_att[j] / 5);
        avg_def[j] = (tmp_def[j] / 5);
    }

    for (int j = 0; j < 2; j++)
    {
        cout << avg_att[j] << endl;
        cout << avg_def[j] << endl;
    }

    score_team1 = (avg_att[0] / avg_def[1])*(avg_att[0] / avg_def[1])*(avg_att[0] / avg_def[1]) + 0.2;
    score_team2 = (avg_att[1] / avg_def[0])*(avg_att[1] / avg_def[0])*(avg_att[1] / avg_def[0]) + 0.2;

    cout << "Wynik meczu: " << score_team1 << " : " << score_team2 << endl;
    cout << "powtorzyc?" << endl;
    cin >> dalej;
    }
    return 0;
}
