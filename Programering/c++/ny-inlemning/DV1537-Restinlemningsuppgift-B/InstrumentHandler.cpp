//
// Created by brasse on 3/2/17.
//

#include "InstrumentHandler.h"

void InstrumentHandler::addStringInstrument(string name, string stringInstrumentSpec, int nrOfStrings)
{
    if (this->arrCap <= this->nrOfInstrument)
    {
        this->expand();
    }
    this->instrument[this->nrOfInstrument++] = new StringedInstruments(name, stringInstrumentSpec, nrOfStrings);
}

// expand the array
void InstrumentHandler::expand()
{
    Instrument** temp = new Instrument*[this->arrCap*2];
    for (int i = 0;i<nrOfInstrument;i++)
    {
        temp[i] = instrument[i];
    }
    delete [] this->instrument;
    this->instrument = temp;
}


void InstrumentHandler::fillArrWithInstruments(string arr[], int arrSize)
{
    WindInstrument* windI = nullptr;
    StringedInstruments* stringI = nullptr;
    if (arrSize >= nrOfInstrument)
    {
        for (int i = 0; i < this->nrOfInstrument; i++)
        {
            windI = dynamic_cast<WindInstrument*>(this->instrument[i]);
            if (windI != nullptr)
            {
                arr[i] = windI->toString();
            }
            else
            {
                stringI = dynamic_cast<StringedInstruments*>(this->instrument[i]);
                arr[i] = stringI->toString();
            }
        }
    }
}

// copy to new array
void InstrumentHandler::copy(const InstrumentHandler & sec)
{
    this->nrOfInstrument = 0;
    this->arrCap = sec.arrCap;
    this->instrument = new Instrument*[this->arrCap];
    for (int i = 0; i < this->arrCap; i++)
    {
        this->instrument[i] = nullptr;
    }

    this->nrOfInstrument = sec.nrOfInstrument;
    WindInstrument* windI = nullptr;
    StringedInstruments* stringI = nullptr;
    for (int i = 0; i < this->nrOfInstrument; i++)
    {
        windI = dynamic_cast<WindInstrument*>(sec.instrument[i]);
        if (windI != nullptr)
        {
            this->instrument[i] = new WindInstrument(*windI);
        }
        else
        {
            stringI = dynamic_cast<StringedInstruments*>(sec.instrument[i]);
            this->instrument[i] = new StringedInstruments(*stringI);
        }
    }
}

//finds a specifik instruments id by using name
int InstrumentHandler::findInstrument(string name) const
{
    int pos = -1;
    for (int i = 0; i < this->nrOfInstrument; i++)
    {
        if (name == this->instrument[i]->getName())
        {
            pos = i;
            i = this->nrOfInstrument;
        }
    }
    return pos;
}

InstrumentHandler::InstrumentHandler()
{
    this->nrOfInstrument = 0;
    this->arrCap = 1;
    this->instrument = new Instrument*[arrCap];
    this->instrument[0] = nullptr;
}

InstrumentHandler::InstrumentHandler(const InstrumentHandler & sec)
{
    this->copy(sec);
}

InstrumentHandler::~InstrumentHandler()
{
    for (int i = 0; i < this->nrOfInstrument; i++)
    {
        delete this->instrument[i];
    }
    delete[]this->instrument;
}

int InstrumentHandler::getNrOfInstruments() const
{
    return this->nrOfInstrument;
}

int InstrumentHandler::getNrOfStringInstruments() const
{
    int nrOfStringInstrument = 0;
    StringedInstruments* ptrSI = nullptr;
    for (int i = 0; i < this->nrOfInstrument; i++)
    {
        ptrSI = dynamic_cast<StringedInstruments*>(this->instrument[i]);
        if (ptrSI != nullptr)
        {
            nrOfStringInstrument++;
        }
    }
    return nrOfStringInstrument;
}

int InstrumentHandler::getNrOfWindInstruments() const
{
    int nrOfBlowInstruments = 0;
    WindInstrument* windI = nullptr;
    for (int i = 0; i < this->nrOfInstrument; i++)
    {
        windI = dynamic_cast<WindInstrument*>(this->instrument[i]);
        if (windI != nullptr)
        {
            nrOfBlowInstruments++;
        }
    }
    return nrOfBlowInstruments;
}

void InstrumentHandler::addWindInstrument(string name, string typeOfInstrument)
{
    if (this->arrCap <= this->nrOfInstrument)
    {
        this->expand();
    }
    this->instrument[this->nrOfInstrument++] = new WindInstrument(name, typeOfInstrument);
}

bool InstrumentHandler::delInstrument(string name)
{
    bool removed = false;
    int pos = this->findInstrument(name);
    if (pos != -1)
    {
        delete this->instrument[pos];
        this->instrument[pos] = this->instrument[this->nrOfInstrument - 1];
        this->nrOfInstrument--;
        removed = true;
    }
    return removed;
}

void InstrumentHandler::fillArrWithStringInstruments(string arr[], int arrSize)
{
    StringedInstruments* stringI = nullptr;
    int counter = 0;
    if (arrSize >= this->getNrOfStringInstruments())
    {
        for (int i = 0; i < this->nrOfInstrument; i++)
        {
            stringI = dynamic_cast<StringedInstruments*>(this->instrument[i]);
            if (stringI != nullptr)
            {
                arr[counter++] = stringI->toString();
            }
        }
    }
}

int InstrumentHandler::fillArrWithSpecStringInstruments(string arr[], int arrCap, int max, int min)
{
    StringedInstruments* stringI = nullptr;
    int counter = 0;
    if (arrCap >= this->getNrOfStringInstruments())
    {
        for (int i = 0; i < this->nrOfInstrument; i++)
        {
            stringI = dynamic_cast<StringedInstruments*>(this->instrument[i]);
            if (stringI != nullptr)
            {
                if (stringI->getNrOfStrings() > min && stringI->getNrOfStrings() < max)
                {
                    arr[counter++] = stringI->toString();
                }
            }
        }
    }
    return counter;
}

void InstrumentHandler::fillArrWithWindInstruments(string arr[], int arrCap)
{
    WindInstrument* windI = nullptr;
    int counter = 0;
    if (arrCap >= this->getNrOfWindInstruments())
    {
        for (int i = 0; i < this->nrOfInstrument; i++)
        {
            windI = dynamic_cast<WindInstrument*>(this->instrument[i]);
            if (windI != nullptr)
            {
                arr[counter++] = windI->toString();
            }
        }
    }
}

void InstrumentHandler::changeNrOfStrings(string name, int nrOfStrings)
{
    StringedInstruments* stringI = nullptr;
    int pos = this->findInstrument(name);
    if (pos != -1)
    {
        stringI = dynamic_cast<StringedInstruments*>(this->instrument[pos]);
        stringI->setNrOfStrings(nrOfStrings);
    }
}

void InstrumentHandler::operator=(const InstrumentHandler & sec)
{
    if (this != &sec)
    {
        this->delAllInstrument();
        this->copy(sec);
    }
}

void InstrumentHandler::delAllInstrument()
{
    for (int i = 0; i < this->nrOfInstrument; i++)
    {
        delete this->instrument[i];
    }
    delete[]this->instrument;
}
