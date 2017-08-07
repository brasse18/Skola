//
// Created by brasse on 3/2/17.
//

#ifndef DV1537_RESTINLEMNINGSUPPGIFT_B_INSTRUMENT_H
#define DV1537_RESTINLEMNINGSUPPGIFT_B_INSTRUMENT_H

#include <iostream>
static enum Type{WIND,STRING};

using namespace std;

class Instrument
{
private:
    string name;
public:
    Instrument(string name);
    virtual string toStringSpec() const = 0;
    Instrument(const Instrument& sec);
    virtual ~Instrument();
    string getName()const;
    string toString()const;
};


#endif //DV1537_RESTINLEMNINGSUPPGIFT_B_INSTRUMENT_H
