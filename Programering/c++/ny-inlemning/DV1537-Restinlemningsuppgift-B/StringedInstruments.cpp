//
// Created by brasse on 3/2/17.
//

#include "StringedInstruments.h"

StringedInstruments::StringedInstruments(string name, string spec, int nrOfStrengs):Instrument(name)
{
    this->nrOfStrings = nrOfStrengs;
    this->stringInstrumentSpec = spec;
}

StringedInstruments::StringedInstruments(const StringedInstruments &sec):Instrument(sec)
{
    this->nrOfStrings = sec.getNrOfStrings();
    this->stringInstrumentSpec = sec.getStringInstrumentSpec();
}

string StringedInstruments::getStringInstrumentSpec() const
{
    return this->stringInstrumentSpec;
}

StringedInstruments::~StringedInstruments()
{

}

int StringedInstruments::getNrOfStrings() const
{
    return this->nrOfStrings;
}

void StringedInstruments::setNrOfStrings(int nrOfStrings)
{
    this->nrOfStrings = nrOfStrings;
}

string StringedInstruments::toStringSpec() const
{
    return " " + this->stringInstrumentSpec;
}
