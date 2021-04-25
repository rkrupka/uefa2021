#ifndef MATCH_H
#define MATCH_H
//////////////////////////////////////////
// Plik: Match.h
//////////////////////////////////////////
#include "team.h"

struct LineUp {
    Team* team;
    std::vector<Player*> playing;
    int score;
};

class Match
{
public:
    Match();
    Team* winner() const;
private:
    LineUp _team1;
    LineUp _team2;
};

#endif // MATCH_H

