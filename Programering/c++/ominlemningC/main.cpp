#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <stdio.h>
#include "Competitor.h"

using namespace std;

void inputAndSetName(Competitor competitors[], int nrOfCompetitors)
{
    string name = "";
    cout << "Input the name of the " << nrOfCompetitors << " competitors:" << endl;
    for (int i=0;i<nrOfCompetitors;i++)
    {
        cin >> name;
        competitors[i].setName(name);
    }
}

void makeTwist(Competitor competitors[],int nrOfCompetitors)
{
    for (int i=0;i<nrOfCompetitors;i++)
    {
        competitors[i].doTwist();
        cout << competitors[i].getTwist() << endl;
    }
}

void makeMove(Competitor competitors[],int nrOfCompetitors)
{
    for (int i=0;i<nrOfCompetitors;i++)
    {
        competitors[i].move();
    }
}

void showAll(Competitor competitors[],int nrOfCompetitors)
{
    for (int i=0;i<nrOfCompetitors;i++)
    {
        if (competitors[i].getTwist() == 0)
        {
            cout << competitors[i].getName() << " is heading towards start carrying " << competitors[i].getMark() << " markings." << endl;
        } else
        {
            cout << competitors[i].getName() << " is heading towards goal carrying " << competitors[i].getMark() << " markings." << endl;
        }
    }
}

int winner(Competitor competitors[],int nrOfCompetitors,int marks)
{
    int winer = 0;
    for (int i=0;i<nrOfCompetitors;i++)
    {
        if (competitors[i] == marks)
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
    cout << "How many twist places are there? " << endl;
    cin >> marks;
    cout << "How many persons will participate? " << endl;
    cin >> nrOfCompetitors;
    Competitor competitors[nrOfCompetitors];
    for (int i=0;i<nrOfCompetitors;i++)
    {
        competitors[i] = Competitor(marks,"");
        cout << competitors[i].getName() << endl;
    }
    inputAndSetName(competitors,nrOfCompetitors);

    int end = -1;
    int twists = 0;
    while (loop)
    {
        end = winner(competitors,nrOfCompetitors,marks);
        if (end == -1)
        {
            makeTwist(competitors,nrOfCompetitors);
            makeMove(competitors,nrOfCompetitors);
            showAll(competitors,nrOfCompetitors);
            cout << endl;
            twists++;
        }
        else
        {
            cout << "The winner is " << competitors[end].getName() << " after " << twists << " twists.";
            loop = false;
        }
    }
    //delete [] competitors;
    return 0;
}