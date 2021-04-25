//////////////////////////////////////////
// Plik: Team.cpp
//////////////////////////////////////////
#include "Team.h"
#include <iostream>

using namespace std;
int Team::licznik = 0;
Team::Team()
{
    licznik++;
    int i = licznik;

    fstream plik3;
    plik3.open("nationalities.txt",ios::in);

    if (plik3.good()==false)
        {
         cout<<"Nie udalo sie odtworzyc pliku.";
         exit(0);
        }

    for(int a = 1; a <= i; a++)
        {
            getline(plik3, nationality);
        }
    plik3.close();

}

