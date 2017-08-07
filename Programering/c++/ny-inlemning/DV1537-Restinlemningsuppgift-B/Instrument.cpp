//
// Created by brasse on 3/2/17.
//

#include "Instrument.h"

Instrument::Instrument(string name) {
    this->name = name;
}

Instrument::Instrument(const Instrument &sec) {
    this->name = sec.name;
}

Instrument::~Instrument() {

}

string Instrument::getName() const {
    return this->name;
}

string Instrument::toString() const {
    return this->name + toStringSpec();
}
