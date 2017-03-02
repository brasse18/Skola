//
// Created by brasse on 2016-11-17.
//

#include "Housing.h"
#include <string>

using namespace std;

Housing::Housing(int id) {
    this->type = "";
    this->adres = "";
    this->nrOfRoms = 1;
    this->rent = 0;
    this->size = 0;
    this->id = id;
}

Housing::Housing(int id, int rent, int size, int nrOfRoms, string adres, string type) {
    this->type = type;
    this->adres = adres;
    this->nrOfRoms = nrOfRoms;
    this->rent = rent;
    this->size = size;
    this->id = id;
}

int Housing::getId() const {
    return this->id;
}

int Housing::getSize() const {
    return this->size;
}

int Housing::getRent() const {
    return this->rent;
}

int Housing::getNrOfRoms() const {
    return this->nrOfRoms;
}

string Housing::getAdres() const {
    return this->adres;
}

string Housing::getType() const {
    return this->type;
}

void Housing::changeType(string type) {
    this->type = type;
}

void Housing::changeAdres(string adres) {
    this->adres = adres;
}

void Housing::changeNrOfRoms(int nrOfRoms) {
    this->nrOfRoms = nrOfRoms;
}

void Housing::changeRent(int rent) {
    this->rent = rent;
}

void Housing::changeSize(int size) {
    this->size = size;
}

Housing& Housing::operator=(const Housing& sec) {
    return *this;
}
