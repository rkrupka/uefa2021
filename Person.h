#ifndef PERSON_H
#define PERSON_H
//////////////////////////////////////////
// Plik: Person.h
//////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
 public:
     //string nationality;
     string first_name;
     string last_name;
     //string getFirstName();
     void get_firstname();
     void get_lastname();
     Person();
};
#endif // PERSON_H
