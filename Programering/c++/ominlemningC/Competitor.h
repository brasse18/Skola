//
// Created by brasse on 11/5/16.
//

#ifndef OMINLEMNINGC_COMPETITOR_H
#define OMINLEMNINGC_COMPETITOR_H
#include <string>

using namespace std;

class Competitor {
private:
    int mark = 0;
    string name;
    int twist;
    const int back = 1;
    const int forward = 2;
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
