//
// Created by brasse on 3/2/17.
//

#ifndef DV1537_RESTINLEMNINGSUPPGIFT_B_INSTRUMENTHANDLER_H
#define DV1537_RESTINLEMNINGSUPPGIFT_B_INSTRUMENTHANDLER_H

#include <iostream>
#include "Instrument.h"
#include "WindInstrument.h"
#include "StringedInstruments.h"

using namespace std;

class InstrumentHandler
{
private:
    Instrument** instrument;
    int nrOfInstrument;
    int arrCap;
    void expand();
    void copy(const InstrumentHandler& sec);
    int findInstrument(string name)const;
    void delAllInstrument();
public:
    InstrumentHandler();
    ~InstrumentHandler();
    bool delInstrument(string name);
    InstrumentHandler(const InstrumentHandler &sec);
    void addStringInstrument(string name, string stringInstrumentSpec, int nrOfStrings);
    void addWindInstrument(string name, string windInstrumentSpec);
    void fillArrWithInstruments(string arr[], int arrCap);
    void fillArrWithStringInstruments(string arr[], int arrCap);
    int fillArrWithSpecStringInstruments(string arr[], int arrCap, int max,int min);
    void fillArrWithWindInstruments(string arr[], int arrCap);
    void changeNrOfStrings(string name, int nrOfStrings);
    int getNrOfInstruments()const;
    int getNrOfStringInstruments()const;
    int getNrOfWindInstruments()const;
    void operator=(const InstrumentHandler &sec);

};


#endif //DV1537_RESTINLEMNINGSUPPGIFT_B_INSTRUMENTHANDLER_H
