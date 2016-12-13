//
// Created by brasse on 11/5/16.
//

#include "Competitor.h"
#include <string>
#include <stdlib.h>
#include <iostream>

Competitor::Competitor(string name)
{
    this->mark = 0;
    this->name = name;
}

string Competitor::getName() const
{
    return this->name;
}

void Competitor::doTwist()
{
    this->twist = rand() % 2 + 1;

}

void Competitor::move()
{
    cout << this->twist << " " << this->back << " " << this->forward << " öööööööööööööööööö" << endl;
    if (this->twist == 1)
    {
        if (this->mark > 0)
        {
            this->mark--;
        }
    }
    else if (this->twist == 2)
    {
        this->mark++;
    }
}

string Competitor::toString() {
    string out = "error";
    if (this->twist == this->forward)
    {
        out = name + " is heading towards start carrying " + to_string(mark) + " markings.";
    } else if (this->twist == this->back)
    {
        out = name + " is heading towards goal carrying " + to_string(mark) +" markings.";
    }
    return out;
}

bool Competitor::isOnMark(int nr)
{
    bool anser = false;
    cout << mark << endl;
    if (this->mark >= nr)
    {
        anser = true;
    }
    return anser;
}

Competitor::Competitor() {}
