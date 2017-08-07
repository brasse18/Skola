//
// Created by brasse on 3/2/17.
//

#ifndef DV1537_RESTINLEMNINGSUPPGIFT_B_STRINGEDINSTRUMENTS_H
#define DV1537_RESTINLEMNINGSUPPGIFT_B_STRINGEDINSTRUMENTS_H

#include <iostream>
#include "Instrument.h"

using namespace std;

class StringedInstruments: public Instrument
{
private:
    int nrOfStrings;
    string stringInstrumentSpec;
public:
    StringedInstruments(string name,string spec,int nrOfStrengs);
    StringedInstruments(const StringedInstruments& sec);
    virtual ~StringedInstruments();
    string toStringSpec()const;
    string getStringInstrumentSpec()const;
    int getNrOfStrings()const;
    void setNrOfStrings(int nrOfStrings);
};


#endif //DV1537_RESTINLEMNINGSUPPGIFT_B_STRINGEDINSTRUMENTS_H
