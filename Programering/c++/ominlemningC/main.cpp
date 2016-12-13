#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <stdio.h>
#include "Competitor.h"

using namespace std;

void input(Competitor** competitors[], int &nrOfCompetitors,int &marks)
{
    string name = "";
    cout << "How many twist places are there? " << endl;
    cin >> marks;
    cout << "How many persons will participate? " << endl;
    cin >> nrOfCompetitors;
    cout << "Input the name of the " << nrOfCompetitors << " competitors:" << endl;
    delete [] *competitors;
    cout << nrOfCompetitors << "<- gay shit" << endl;
    *competitors = new Competitor*[nrOfCompetitors];
    for (int i=0;i<nrOfCompetitors;i++)
    {
        cin >> name;
        (*competitors)[i] = new Competitor(name);
    }
}

void doTwist(Competitor competitors[],int nrOfCompetitors)
{
    for (int i=0;i<nrOfCompetitors;i++)
    {
        competitors[i].doTwist();
        cout << "test twist" << endl;
    }
}

void makeMove(Competitor competitors[],int nrOfCompetitors)
{
    for (int i=0;i<nrOfCompetitors;i++)
    {
        competitors[i].move();
        cout << "test move" << endl;
    }
}

void showAll(Competitor competitors[],int nrOfCompetitors)
{
    for (int i=0;i<nrOfCompetitors;i++)
    {
        cout << competitors[i].toString() << endl;
    }
}

int winner(Competitor** competitors,int nrOfCompetitors,int marks)
{
    int winer = 0;
    for (int i=0;i<nrOfCompetitors;i++)
    {
        if (competitors[i]->isOnMark(marks))
        {
            winer = i;
        } else
        {
            winer = -1;
        }
    }
    return winer;
}

int main() {
    int marks = 3;
    int nrOfCompetitors = 3;
    bool loop = true;
    srand(time(NULL));
    Competitor** competitors = new Competitor*[nrOfCompetitors];
    input(&competitors,nrOfCompetitors,marks);
    //cout << "0: " << competitors[0]->toString() << "; 1: "  << competitors[1]->toString() << endl;
    const int noWiner = -1;
    int winer = noWiner;
    int twists = 0;
    while (loop)
    {
        winer = winner(competitors, nrOfCompetitors, marks);
        if (winer == noWiner)
        {
            doTwist(*competitors,nrOfCompetitors);
            makeMove(*competitors,nrOfCompetitors);
            showAll(*competitors,nrOfCompetitors);
            twists++;
        }
        else
        {
            cout << "The winner is " << competitors[winer]->getName() << " after " << twists << " twists.";
            loop = false;
        }
    }
    delete [] competitors;
    return 0;
}