//
// Created by brasse on 11/5/16.
//

#ifndef OMINLEMNINGC_COMPETITOR_H
#define OMINLEMNINGC_COMPETITOR_H

#include <string>

using namespace std;

class Competitor {
private:
    int marks;
    int mark;
    string name;
    int twist;
public:
    Competitor();
    Competitor(int marks,string name);
    int getMark() const;
    string getName() const;
    void setMark(int mark);
    void setName(string name);
    void doTwist();
    int getTwist() const;
    void move();
    bool operator == (const int&);

};


#endif //OMINLEMNINGC_COMPETITOR_H
