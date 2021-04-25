//////////////////////////////////////////
// Plik: Person.cpp
//////////////////////////////////////////
#include "Person.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

/*string getFirstName()
{
    srand(time(NULL));
    int i = ( rand() % 100 ) + 1;

    fstream plik;
    plik.open("first_names.txt",ios::in);

    if (plik.good()==false)
        {
         cout<<"Nie udalo sie odtworzyc pliku.";
         exit(0);
        }

    string cytat;

    for(int a = 1; a <= i; a++)
        {
            getline(plik, cytat);
        }
    plik.close();
    return cytat;
}; */

Person::Person()
{
    srand(time(NULL));
    int i = ( rand() % 100 ) + 1;

    fstream plik1;
    plik1.open("first_names.txt",ios::in);

    if (plik1.good()==false)
        {
         cout<<"Nie udalo sie odtworzyc pliku.";
         exit(0);
        }

    for(int a = 1; a <= i; a++)
        {
            getline(plik1, first_name);
        }
    plik1.close();

    i = ( rand() % 100 ) + 1;

    fstream plik2;
    plik2.open("last_names.txt",ios::in);

    if (plik2.good()==false)
        {
         cout<<"Nie udalo sie odtworzyc pliku.";
         exit(0);
        }

    for(int a = 1; a <= i; a++)
        {
            getline(plik2, last_name);
        }
    plik2.close();
};
