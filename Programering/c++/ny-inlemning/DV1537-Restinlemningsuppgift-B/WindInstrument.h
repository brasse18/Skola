//
// Created by brasse on 3/2/17.
//

#ifndef DV1537_RESTINLEMNINGSUPPGIFT_B_WINDINSTRUMENT_H
#define DV1537_RESTINLEMNINGSUPPGIFT_B_WINDINSTRUMENT_H

#include <iostream>
#include "Instrument.h"

using namespace std;

class WindInstrument: public Instrument
{
private:
    string WindInstrumentSpec;
public:
    WindInstrument(string name,string WindInstrumentSpec);
    WindInstrument(const WindInstrument& sec);
    virtual ~WindInstrument();
    string toStringSpec()const;
    string getWindInstrumentSpec()const;

};


#endif //DV1537_RESTINLEMNINGSUPPGIFT_B_WINDINSTRUMENT_H
