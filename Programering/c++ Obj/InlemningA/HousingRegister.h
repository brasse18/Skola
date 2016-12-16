//
// Created by brasse on 2016-11-17.
//

#ifndef INLEMNINGA_HOUSINGREGISTER_H
#define INLEMNINGA_HOUSINGREGISTER_H

#include "Housing.h"

using namespace std;

class HousingRegister {
private:
    Housing **housing;
    int nrOfHous;
    int nrOfPlacesForHous;
    int idNr;
public:
    HousingRegister();
    HousingRegister(int nrOfHous,int nrOfPlacesForHous,Housing **housing);
    void expandHous();
    int getIdNr();
    int getNrOfHous()const;
    int getNrOfPlacesForHous();
    Housing* getHouse(int id) const;
    int* getHouseId(string adres,string type,int nrOfRoms,int size,int rent) const;
    int* getHouseId(int minRent) const;
    string getAllToString();
    string getAllToPrint();
    void addHous(int rent, int size, int nrOfRoms, string adres, string type);
    int newId();
    void setIdNr(int idNr);
    void setHous(Housing** hous);
    void setNrOfPlacesForHous(int nrOfPlacesForHous);
    void setNrOfHous(int nrOfHous);
    void delAll();
	void editHous(int id, int rent, int size, int nrOfRoms, string adres, string type);
	void removeHous(int id);
	bool idCheck(int id);


};


#endif //INLEMNINGA_HOUSINGREGISTER_H
