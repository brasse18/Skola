//
// Created by brasse on 11/5/16.
//

#include "Competitor.h"
#include <string>
#include <stdlib.h>

Competitor::Competitor() {}

Competitor::Competitor(int marks, string name)
{
    this->marks = marks;
    this->mark = 0;
    this->name = name;
}

int Competitor::getMark() const
{
    return this->mark;
}

string Competitor::getName() const
{
    return this->name;
}

void Competitor::setMark(int mark)
{
    this->mark = mark;
}

void Competitor::setName(string name)
{
    this->name = name;
}

void Competitor::doTwist()
{
    twist = rand() % 2;
}

int Competitor::getTwist() const
{
    return this->twist;
}

void Competitor::move()
{
    if (this->twist == 0)
    {
        if (this->mark > 0)
        {
            this->mark--;
        }
    }
    else
    {
        this->mark++;
    }
}

bool Competitor::operator==(const int & sec)
{
    bool anser = false;
    if (this->mark == sec)
    {
        anser = true;
    }
    return anser;
}
