//
// Created by brasse on 2016-11-17.
//

#include "HousingRegister.h"

HousingRegister::HousingRegister() {
    this->nrOfHous = 1;
    this->nrOfPlacesForHous = 2;
    this->idNr = 0;
    this->housing = new Housing*[nrOfPlacesForHous];
    this->housing[0] = new Housing(newId());
}

HousingRegister::HousingRegister(int nrOfHous, int nrOfPlacesForHous, Housing **housing) {

}

Housing* HousingRegister::getHouse(int id) const {
    Housing* tempHousing;
    for (int i=0;i<this->getNrOfHous();i++){
        if (housing[i]->getId() == id)
        {
            tempHousing = housing[i];
        }
    }
    return tempHousing;
}

int *HousingRegister::getHouseId(string adres, string type, int nrOfRoms, int size, int rent) const {
    return nullptr;
}

int *HousingRegister::getHouseId(int minRent) const {
    return nullptr;
}

int HousingRegister::getNrOfHous()const {
    return this->nrOfHous;
}

void HousingRegister::addHous(int rent, int size, int nrOfRoms, string adres, string type) {
    Housing* newHouse = new Housing(getIdNr(), rent, size, nrOfRoms, adres, type);
    if (this->getNrOfHous() == this->getNrOfPlacesForHous()){
        this->expandHous();
        this->housing[this->getNrOfHous()] = newHouse;
        this->nrOfHous++;
    } else {
        this->housing[this->getNrOfHous()] = newHouse;
        this->nrOfHous++;
    }
}

int HousingRegister::getNrOfPlacesForHous() {
    return this->nrOfPlacesForHous;
}

void HousingRegister::expandHous() {
    Housing** temp = new Housing*[this->getNrOfPlacesForHous()*2];
    for (int i=0;i<this->getNrOfHous();i++)
    {
        temp[i] = this->housing[i];
    }
    delete this->housing;
    this->housing = temp;
    setNrOfPlacesForHous(this->getNrOfPlacesForHous()*2);
}

int HousingRegister::newId() {
    idNr++;
    return this->idNr;
}

void HousingRegister::setNrOfPlacesForHous(int nrOfPlacesForHous) {
    this->nrOfPlacesForHous = nrOfPlacesForHous;
}

string HousingRegister::getAllToString() {
    string outString = "";
    string newline = "\n";
    for (int i=0;i<this->getNrOfHous();i++)
    {
        outString += "Id: ";
        outString += to_string(housing[i]->getId());
        outString += " Addres: ";
        outString += housing[i]->getAdres();
        outString += " Type: ";
        outString += housing[i]->getType();
        outString += " Size: ";
        outString += to_string(housing[i]->getSize());
        outString += " Anntal Rom: ";
        outString += to_string(housing[i]->getNrOfRoms());
        outString += " Hyra: ";
        outString += to_string(housing[i]->getRent());
        outString += newline;
    }
    return outString;
}

void HousingRegister::delAll() {
    for (int i=0;i<this->getNrOfHous();i++)
    {
        delete this->housing[i];
    }
    delete this->housing;
}

void HousingRegister::editHous(int id, int rent, int size, int nrOfRoms, string adres, string type)
{
	for (int i = 0;i < getNrOfHous();i++)
	{
		if (housing[i]->getId() == id)
		{
			housing[i]->changeAdres(adres);
			housing[i]->changeRent(rent);
			housing[i]->changeSize(size);
			housing[i]->changeNrOfRoms(nrOfRoms);
			housing[i]->changeType(type);
		}
	}
}

void HousingRegister::removeHous(int id)
{
}

bool HousingRegister::idCheck(int id)
{
	bool anser = false;
	for (int i = 0;i < getNrOfHous();i++)
	{
		if (housing[i]->getId() == id)
		{
			anser = true;
		}
	}
	return anser;
}

void HousingRegister::setNrOfHous(int nrOfHous) {
    this->nrOfHous = nrOfHous;
}

void HousingRegister::setHous(Housing** hous) {
    //delAll();
    this->housing = hous;
}

string HousingRegister::getAllToPrint() {
    string outString = "";
    string newline = "\n";
    outString += to_string(getNrOfHous());
    outString += newline;
    outString += to_string(getIdNr());
    outString += newline;
    for (int i=0;i<this->getNrOfHous();i++)
    {
        outString += to_string(housing[i]->getId());
        outString += newline;
        outString += to_string(housing[i]->getRent());
        outString += newline;
        outString += to_string(housing[i]->getSize());
        outString += newline;
        outString += to_string(housing[i]->getNrOfRoms());
        outString += newline;
        outString += housing[i]->getAdres();
        outString += newline;
        outString += housing[i]->getType();
        outString += newline;
    }
    return outString;
}

int HousingRegister::getIdNr() {
    return this->idNr;
}

void HousingRegister::setIdNr(int idNr) {
    this->idNr = idNr;
}
