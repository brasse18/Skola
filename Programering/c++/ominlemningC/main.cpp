#include <iostream>
#include <ctime>
#include "Competitor.h"

using namespace std;

const static int noWiner = -1;

void input(Competitor** &competitors, int &nrOfCompetitors,int &marks)
{
    string name = "";
    cout << "How many twist places are there? " << endl;
    cin >> marks;
    cout << "How many persons will participate? " << endl;
    cin >> nrOfCompetitors;
    cout << "Input the name of the " << nrOfCompetitors << " competitors:" << endl;
    competitors = new Competitor*[nrOfCompetitors];
    for (int i=0;i<nrOfCompetitors;i++)
    {
        cin >> name;
        competitors[i] = new Competitor(name);
    }
}

void doTwist(Competitor* competitors[],int nrOfCompetitors)
{
    for (int i=0;i<nrOfCompetitors;i++)
    {
        competitors[i]->doTwist();
    }
}

void makeMove(Competitor* competitors[],int nrOfCompetitors)
{
    for (int i=0;i<nrOfCompetitors;i++)
    {
        competitors[i]->move();
    }
}

void showAll(Competitor* competitors[],int nrOfCompetitors)
{
    for (int i=0;i<nrOfCompetitors;i++)
    {
        cout << competitors[i]->toString() << endl;
    }
    cout << endl;
    cout << endl;
}

int winner(Competitor* competitors[],int nrOfCompetitors,int marks)
{
    int winer = noWiner;
    for (int i=0;i<nrOfCompetitors;i++)
    {
        if (competitors[i]->isOnMark(marks) && winer == noWiner)
        {
            winer = i;
        }
    }
    return winer;
}

int main() {
    int marks;
    int nrOfCompetitors;
    bool loop = true;
    srand(time(NULL));
    Competitor** competitors = nullptr;
    input(competitors,nrOfCompetitors,marks);

    int winer = noWiner;
    int twists = 0;
    while (loop)
    {
        winer = winner(competitors, nrOfCompetitors, marks);
        if (winer == noWiner)
        {
            doTwist(competitors,nrOfCompetitors);
            makeMove(competitors,nrOfCompetitors);
            showAll(competitors,nrOfCompetitors);
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
