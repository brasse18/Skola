//
// Created by brasse on 3/2/17.
//

#include "WindInstrument.h"

WindInstrument::WindInstrument(string name, string WindInstrumentSpec):Instrument(name)
{
    this->WindInstrumentSpec = WindInstrumentSpec;
}

WindInstrument::WindInstrument(const WindInstrument &sec):Instrument(sec)
{
    this->WindInstrumentSpec = sec.getWindInstrumentSpec();
}

WindInstrument::~WindInstrument()
{

}

string WindInstrument::toStringSpec() const {
    return " " + getWindInstrumentSpec();
}

string WindInstrument::getWindInstrumentSpec() const {
    return this->WindInstrumentSpec;
}
