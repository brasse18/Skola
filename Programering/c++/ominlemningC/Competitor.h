//
// Created by brasse on 11/5/16.
//

#ifndef OMINLEMNINGC_COMPETITOR_H
#define OMINLEMNINGC_COMPETITOR_H

#include <iostream>

using namespace std;

const static int back = 1;
const static int forwardddd = 2;

class Competitor {
private:
    int mark = 0;
    string name;
    int twist;
public:
    Competitor();
    Competitor(string name);
    bool isOnMark(int nr);
    string getName() const;
    void doTwist();
    void move();
    string toString();
};

#endif //OMINLEMNINGC_COMPETITOR_H
